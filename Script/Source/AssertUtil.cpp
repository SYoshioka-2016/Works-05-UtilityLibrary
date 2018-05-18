#include <AssertUtil.h>

#include <StringUtil.h>
	#include <iostream>



namespace ns_myUtility
{



namespace ns_AssertUtil
{



	void quit(
		const std::string& filename,
		const unsigned int line,
		const std::string& expression,
		const std::string& windowTitle,
		const std::string& messageText
	)
	{
		std::string showText;

		std::string replacedFilename = ns_stringUtil::replaceString( filename, "\\", "/" );

		showText += "ファイル : " + replacedFilename;
		showText += "\n\n";
		showText += "行番号 : " + std::to_string( line );

		if ( !expression.empty() )
		{
			showText += "\n\n";
			showText += "条件式 : " + expression;
		}

		if ( !messageText.empty() )
		{
			showText += "\n\n";
			showText += messageText;
		}

		std::cout << showText << std::endl;

		showText += "\n\n";
		showText += "アプリケーションを中止しますか?";

		int button = MessageBoxA( NULL, showText.c_str(), windowTitle.c_str(), MB_YESNO | MB_DEFBUTTON1 | MB_ICONSTOP );

		if ( button == IDYES )
		{
// 引数の数値をどうするか･･･
exit( 1 );
		}
	}



	void halt(
		const std::string& filename,
		const unsigned int line,
		const std::string& messageText
	)
	{
		std::string showText;

		std::string replacedFilename = ns_stringUtil::replaceString( filename, "\\", "/" );

		showText += "ファイル : " + replacedFilename;
		showText += "\n\n";
		showText += "行番号 : " + std::to_string( line );

		if ( !messageText.empty() )
		{
			showText += "\n\n";
			showText += messageText;
		}

		std::cout << showText << std::endl;

		showText += "\n\n";
		showText += "アプリケーションを停止します。";

		MessageBoxA( NULL, showText.c_str(), "Halt!!!", MB_OK | MB_ICONSTOP );



		__halt();
	}



}	// namespace ns_AssertUtil



}	// namespace ns_myUtility 
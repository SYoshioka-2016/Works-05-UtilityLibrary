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

		showText += "�t�@�C�� : " + replacedFilename;
		showText += "\n\n";
		showText += "�s�ԍ� : " + std::to_string( line );

		if ( !expression.empty() )
		{
			showText += "\n\n";
			showText += "������ : " + expression;
		}

		if ( !messageText.empty() )
		{
			showText += "\n\n";
			showText += messageText;
		}

		std::cout << showText << std::endl;

		showText += "\n\n";
		showText += "�A�v���P�[�V�����𒆎~���܂���?";

		int button = MessageBoxA( NULL, showText.c_str(), windowTitle.c_str(), MB_YESNO | MB_DEFBUTTON1 | MB_ICONSTOP );

		if ( button == IDYES )
		{
// �����̐��l���ǂ����邩���
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

		showText += "�t�@�C�� : " + replacedFilename;
		showText += "\n\n";
		showText += "�s�ԍ� : " + std::to_string( line );

		if ( !messageText.empty() )
		{
			showText += "\n\n";
			showText += messageText;
		}

		std::cout << showText << std::endl;

		showText += "\n\n";
		showText += "�A�v���P�[�V�������~���܂��B";

		MessageBoxA( NULL, showText.c_str(), "Halt!!!", MB_OK | MB_ICONSTOP );



		__halt();
	}



}	// namespace ns_AssertUtil



}	// namespace ns_myUtility 
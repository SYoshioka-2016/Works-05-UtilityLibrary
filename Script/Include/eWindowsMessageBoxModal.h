#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXMODAL_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXMODAL_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	


	enum class eWindowsMessageBoxModal
	{
		// ユーザーは、メッセージボックスに応答しなければ、
		// hWnd パラメータで指定されたウィンドウで作業を継続できません。
		// 他のスレッドのウィンドウへ移動して作業することはできます。
		// アプリケーション内のウィンドウの階層にもよりますが、
		// ユーザーは、同じスレッド内の他のウィンドウへ移動できることがあります。
		// このメッセージボックスの親ウィンドウに対するすべての子ウィンドウ（ メッセージボックスの「兄弟」ウィンドウ）は、
		// 自動的に無効になりますが、ポップアップウィンドウはこの限りではありません。
		Appl_MBModal	= MB_APPLMODAL,

		// メッセージボックスが WS_EX_TOPMOST スタイルを備えている以外は、MB_APPLMODAL と同じです。
		// ユーザーがすぐに対処する必要がある重大なエラー（ たとえばメモリの不足）を通知するために、
		// システムモーダルのメッセージボックスを使います。
		// ユーザーは、hWnd に関連付けられていないウィンドウを通常の方法で操作できます。
		System_MBModal = MB_SYSTEMMODAL,

		// hWnd パラメータが NULL の場合、現在のスレッドに所属するすべてのトップレベルウィンドウが無効になること以外は、
		// MB_APPLMODAL と同じです。
		// 呼び出し側のアプリケーションまたはライブラリが有効なウィンドウハンドルを持っておらず、
		// かつ他のスレッドを中断せずに現在のスレッドの他のウィンドウへの入力を禁止したいときにこのフラグを使います。
		Task_MBModal	= MB_TASKMODAL
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXMODAL_H_
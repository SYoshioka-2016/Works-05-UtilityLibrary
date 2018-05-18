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
		// ���[�U�[�́A���b�Z�[�W�{�b�N�X�ɉ������Ȃ���΁A
		// hWnd �p�����[�^�Ŏw�肳�ꂽ�E�B���h�E�ō�Ƃ��p���ł��܂���B
		// ���̃X���b�h�̃E�B���h�E�ֈړ����č�Ƃ��邱�Ƃ͂ł��܂��B
		// �A�v���P�[�V�������̃E�B���h�E�̊K�w�ɂ����܂����A
		// ���[�U�[�́A�����X���b�h���̑��̃E�B���h�E�ֈړ��ł��邱�Ƃ�����܂��B
		// ���̃��b�Z�[�W�{�b�N�X�̐e�E�B���h�E�ɑ΂��邷�ׂĂ̎q�E�B���h�E�i ���b�Z�[�W�{�b�N�X�́u�Z��v�E�B���h�E�j�́A
		// �����I�ɖ����ɂȂ�܂����A�|�b�v�A�b�v�E�B���h�E�͂��̌���ł͂���܂���B
		Appl_MBModal	= MB_APPLMODAL,

		// ���b�Z�[�W�{�b�N�X�� WS_EX_TOPMOST �X�^�C��������Ă���ȊO�́AMB_APPLMODAL �Ɠ����ł��B
		// ���[�U�[�������ɑΏ�����K�v������d��ȃG���[�i ���Ƃ��΃������̕s���j��ʒm���邽�߂ɁA
		// �V�X�e�����[�_���̃��b�Z�[�W�{�b�N�X���g���܂��B
		// ���[�U�[�́AhWnd �Ɋ֘A�t�����Ă��Ȃ��E�B���h�E��ʏ�̕��@�ő���ł��܂��B
		System_MBModal = MB_SYSTEMMODAL,

		// hWnd �p�����[�^�� NULL �̏ꍇ�A���݂̃X���b�h�ɏ������邷�ׂẴg�b�v���x���E�B���h�E�������ɂȂ邱�ƈȊO�́A
		// MB_APPLMODAL �Ɠ����ł��B
		// �Ăяo�����̃A�v���P�[�V�����܂��̓��C�u�������L���ȃE�B���h�E�n���h���������Ă��炸�A
		// �����̃X���b�h�𒆒f�����Ɍ��݂̃X���b�h�̑��̃E�B���h�E�ւ̓��͂��֎~�������Ƃ��ɂ��̃t���O���g���܂��B
		Task_MBModal	= MB_TASKMODAL
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXMODAL_H_
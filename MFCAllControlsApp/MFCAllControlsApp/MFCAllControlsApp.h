
// MFCAllControlsApp.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CMFCAllControlsAppApp:
// � ���������� ������� ������ ��. MFCAllControlsApp.cpp
//

class CMFCAllControlsAppApp : public CWinApp
{
public:
	CMFCAllControlsAppApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CMFCAllControlsAppApp theApp;
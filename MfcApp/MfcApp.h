
// MfcApp.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMfcAppApp:
// このクラスの実装については、MfcApp.cpp を参照してください
//

class CMfcAppApp : public CWinApp
{
public:
	CMfcAppApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMfcAppApp theApp;

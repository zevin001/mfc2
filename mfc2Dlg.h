
// mfc2Dlg.h: 头文件
//

#pragma once
#include "SapClassBasic.h"
#include "SapClassGui.h"

// Cmfc2Dlg 对话框
class Cmfc2Dlg : public CDialogEx
{
// 构造
public:
	Cmfc2Dlg(CWnd* pParent = nullptr);

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	SapManager* m_Manager;
	SapAcqDevice* m_AcqDevice;
	SapBuffer* m_Buffers;
	SapTransfer* m_Xfer;
	SapView* m_View;
	SapLocation	locCam;
	BYTE* TMPBUF;

	bool bIsOpen = false;
	bool	bIsGrab = false;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
		

public:
	static void XferCallback(SapXferCallbackInfo* pInfo);
	void FindCamera();
	//void OpenCamera();
	//void CloseCamera();
	//void UpdateUIera();

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnBnClickedOk5();
	afx_msg void OnBnClickedOk4();
};

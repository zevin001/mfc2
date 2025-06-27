// mfc2Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "mfc2.h"
#include "mfc2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序"关于"菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
    ON_BN_CLICKED(IDOK, &Cmfc2Dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// Cmfc2Dlg 对话框

Cmfc2Dlg::Cmfc2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);


}

void Cmfc2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cmfc2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &Cmfc2Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDOK2, &Cmfc2Dlg::OnBnClickedOk2)
	ON_BN_CLICKED(IDOK5, &Cmfc2Dlg::OnBnClickedOk5)
	ON_BN_CLICKED(IDOK4, &Cmfc2Dlg::OnBnClickedOk4)
END_MESSAGE_MAP()


// Cmfc2Dlg 消息处理程序

BOOL Cmfc2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 当程序初始化的时候需要将版本信息输入到控制台


	// 将"关于..."菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

    FindCamera();

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void Cmfc2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cmfc2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cmfc2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

// 逻辑函数

void Cmfc2Dlg::XferCallback(SapXferCallbackInfo* pInfo)
{
	Cmfc2Dlg* pDlg = (Cmfc2Dlg*)pInfo->GetContext();

	// If grabbing in trash buffer, do not display the image, update the
	// appropriate number of frames on the status bar instead
	if (pInfo->IsTrash())
	{
		CString str;
		str.Format(_T("Frames acquired in trash buffer: %d"), pInfo->GetEventCount());
		//pDlg->m_statusWnd.SetWindowText(str);
	}

	// Refresh view
	else
	{
		pDlg->m_View->Show();
	}
}

// 查找相机
void Cmfc2Dlg::FindCamera() {
	CAcqConfigDlg dlg(this, CAcqConfigDlg::ServerAcqDevice);
	if (dlg.DoModal() == IDOK) {
		m_strServer = dlg.GetLocation(); // 假设GetLocation()返回设备名
		InitCamera();
	}
}

// 初始化相机
void Cmfc2Dlg::InitCamera() {
	// 伪代码，具体API请查阅你的SDK
	m_pAcqDevice = new SapAcqDevice(m_strServer);
	m_pBuffer = new SapBuffer(...);
	m_pView = new SapView(m_pBuffer, this->GetSafeHwnd());
	m_pTransfer = new SapAcqDeviceToBuf(m_pAcqDevice, m_pBuffer, XferCallback, this);
	// 检查对象是否创建成功
	// ...
}

// 启动采集
void Cmfc2Dlg::StartAcquisition() {
	if (m_pTransfer) m_pTransfer->Grab();
}

// 事件处理函数

void Cmfc2Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}

void Cmfc2Dlg::OnBnClickedOk2()
{
	// TODO: 在此添加控件通知处理程序代码
}

void Cmfc2Dlg::OnBnClickedOk5()
{
	// TODO: 在此添加控件通知处理程序代码
}

void Cmfc2Dlg::OnBnClickedOk4()
{
	// TODO: 在此添加控件通知处理程序代码
}

// 停止采集和释放资源
void Cmfc2Dlg::StopAcquisition() {
	if (m_pTransfer) m_pTransfer->Freeze();
}
void Cmfc2Dlg::ReleaseCamera() {
	// delete对象，释放资源
}

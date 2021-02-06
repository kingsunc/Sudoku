
// SudokuDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SudokuApp.h"
#include "SudokuDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

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
END_MESSAGE_MAP()


// CSudokuDlg 对话框



CSudokuDlg::CSudokuDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SUDOKU_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSudokuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT_00, m_Sudoku.m_arrSudoku[0][0].iValue);
	DDX_Text(pDX, IDC_EDIT_01, m_Sudoku.m_arrSudoku[0][1].iValue);
	DDX_Text(pDX, IDC_EDIT_02, m_Sudoku.m_arrSudoku[0][2].iValue);
	DDX_Text(pDX, IDC_EDIT_03, m_Sudoku.m_arrSudoku[0][3].iValue);
	DDX_Text(pDX, IDC_EDIT_04, m_Sudoku.m_arrSudoku[0][4].iValue);
	DDX_Text(pDX, IDC_EDIT_05, m_Sudoku.m_arrSudoku[0][5].iValue);
	DDX_Text(pDX, IDC_EDIT_06, m_Sudoku.m_arrSudoku[0][6].iValue);
	DDX_Text(pDX, IDC_EDIT_07, m_Sudoku.m_arrSudoku[0][7].iValue);
	DDX_Text(pDX, IDC_EDIT_08, m_Sudoku.m_arrSudoku[0][8].iValue);

	DDX_Text(pDX, IDC_EDIT_10, m_Sudoku.m_arrSudoku[1][0].iValue);
	DDX_Text(pDX, IDC_EDIT_11, m_Sudoku.m_arrSudoku[1][1].iValue);
	DDX_Text(pDX, IDC_EDIT_12, m_Sudoku.m_arrSudoku[1][2].iValue);
	DDX_Text(pDX, IDC_EDIT_13, m_Sudoku.m_arrSudoku[1][3].iValue);
	DDX_Text(pDX, IDC_EDIT_14, m_Sudoku.m_arrSudoku[1][4].iValue);
	DDX_Text(pDX, IDC_EDIT_15, m_Sudoku.m_arrSudoku[1][5].iValue);
	DDX_Text(pDX, IDC_EDIT_16, m_Sudoku.m_arrSudoku[1][6].iValue);
	DDX_Text(pDX, IDC_EDIT_17, m_Sudoku.m_arrSudoku[1][7].iValue);
	DDX_Text(pDX, IDC_EDIT_18, m_Sudoku.m_arrSudoku[1][8].iValue);

	DDX_Text(pDX, IDC_EDIT_20, m_Sudoku.m_arrSudoku[2][0].iValue);
	DDX_Text(pDX, IDC_EDIT_21, m_Sudoku.m_arrSudoku[2][1].iValue);
	DDX_Text(pDX, IDC_EDIT_22, m_Sudoku.m_arrSudoku[2][2].iValue);
	DDX_Text(pDX, IDC_EDIT_23, m_Sudoku.m_arrSudoku[2][3].iValue);
	DDX_Text(pDX, IDC_EDIT_24, m_Sudoku.m_arrSudoku[2][4].iValue);
	DDX_Text(pDX, IDC_EDIT_25, m_Sudoku.m_arrSudoku[2][5].iValue);
	DDX_Text(pDX, IDC_EDIT_26, m_Sudoku.m_arrSudoku[2][6].iValue);
	DDX_Text(pDX, IDC_EDIT_27, m_Sudoku.m_arrSudoku[2][7].iValue);
	DDX_Text(pDX, IDC_EDIT_28, m_Sudoku.m_arrSudoku[2][8].iValue);

	DDX_Text(pDX, IDC_EDIT_30, m_Sudoku.m_arrSudoku[3][0].iValue);
	DDX_Text(pDX, IDC_EDIT_31, m_Sudoku.m_arrSudoku[3][1].iValue);
	DDX_Text(pDX, IDC_EDIT_32, m_Sudoku.m_arrSudoku[3][2].iValue);
	DDX_Text(pDX, IDC_EDIT_33, m_Sudoku.m_arrSudoku[3][3].iValue);
	DDX_Text(pDX, IDC_EDIT_34, m_Sudoku.m_arrSudoku[3][4].iValue);
	DDX_Text(pDX, IDC_EDIT_35, m_Sudoku.m_arrSudoku[3][5].iValue);
	DDX_Text(pDX, IDC_EDIT_36, m_Sudoku.m_arrSudoku[3][6].iValue);
	DDX_Text(pDX, IDC_EDIT_37, m_Sudoku.m_arrSudoku[3][7].iValue);
	DDX_Text(pDX, IDC_EDIT_38, m_Sudoku.m_arrSudoku[3][8].iValue);

	DDX_Text(pDX, IDC_EDIT_40, m_Sudoku.m_arrSudoku[4][0].iValue);
	DDX_Text(pDX, IDC_EDIT_41, m_Sudoku.m_arrSudoku[4][1].iValue);
	DDX_Text(pDX, IDC_EDIT_42, m_Sudoku.m_arrSudoku[4][2].iValue);
	DDX_Text(pDX, IDC_EDIT_43, m_Sudoku.m_arrSudoku[4][3].iValue);
	DDX_Text(pDX, IDC_EDIT_44, m_Sudoku.m_arrSudoku[4][4].iValue);
	DDX_Text(pDX, IDC_EDIT_45, m_Sudoku.m_arrSudoku[4][5].iValue);
	DDX_Text(pDX, IDC_EDIT_46, m_Sudoku.m_arrSudoku[4][6].iValue);
	DDX_Text(pDX, IDC_EDIT_47, m_Sudoku.m_arrSudoku[4][7].iValue);
	DDX_Text(pDX, IDC_EDIT_48, m_Sudoku.m_arrSudoku[4][8].iValue);

	DDX_Text(pDX, IDC_EDIT_50, m_Sudoku.m_arrSudoku[5][0].iValue);
	DDX_Text(pDX, IDC_EDIT_51, m_Sudoku.m_arrSudoku[5][1].iValue);
	DDX_Text(pDX, IDC_EDIT_52, m_Sudoku.m_arrSudoku[5][2].iValue);
	DDX_Text(pDX, IDC_EDIT_53, m_Sudoku.m_arrSudoku[5][3].iValue);
	DDX_Text(pDX, IDC_EDIT_54, m_Sudoku.m_arrSudoku[5][4].iValue);
	DDX_Text(pDX, IDC_EDIT_55, m_Sudoku.m_arrSudoku[5][5].iValue);
	DDX_Text(pDX, IDC_EDIT_56, m_Sudoku.m_arrSudoku[5][6].iValue);
	DDX_Text(pDX, IDC_EDIT_57, m_Sudoku.m_arrSudoku[5][7].iValue);
	DDX_Text(pDX, IDC_EDIT_58, m_Sudoku.m_arrSudoku[5][8].iValue);

	DDX_Text(pDX, IDC_EDIT_60, m_Sudoku.m_arrSudoku[6][0].iValue);
	DDX_Text(pDX, IDC_EDIT_61, m_Sudoku.m_arrSudoku[6][1].iValue);
	DDX_Text(pDX, IDC_EDIT_62, m_Sudoku.m_arrSudoku[6][2].iValue);
	DDX_Text(pDX, IDC_EDIT_63, m_Sudoku.m_arrSudoku[6][3].iValue);
	DDX_Text(pDX, IDC_EDIT_64, m_Sudoku.m_arrSudoku[6][4].iValue);
	DDX_Text(pDX, IDC_EDIT_65, m_Sudoku.m_arrSudoku[6][5].iValue);
	DDX_Text(pDX, IDC_EDIT_66, m_Sudoku.m_arrSudoku[6][6].iValue);
	DDX_Text(pDX, IDC_EDIT_67, m_Sudoku.m_arrSudoku[6][7].iValue);
	DDX_Text(pDX, IDC_EDIT_68, m_Sudoku.m_arrSudoku[6][8].iValue);

	DDX_Text(pDX, IDC_EDIT_70, m_Sudoku.m_arrSudoku[7][0].iValue);
	DDX_Text(pDX, IDC_EDIT_71, m_Sudoku.m_arrSudoku[7][1].iValue);
	DDX_Text(pDX, IDC_EDIT_72, m_Sudoku.m_arrSudoku[7][2].iValue);
	DDX_Text(pDX, IDC_EDIT_73, m_Sudoku.m_arrSudoku[7][3].iValue);
	DDX_Text(pDX, IDC_EDIT_74, m_Sudoku.m_arrSudoku[7][4].iValue);
	DDX_Text(pDX, IDC_EDIT_75, m_Sudoku.m_arrSudoku[7][5].iValue);
	DDX_Text(pDX, IDC_EDIT_76, m_Sudoku.m_arrSudoku[7][6].iValue);
	DDX_Text(pDX, IDC_EDIT_77, m_Sudoku.m_arrSudoku[7][7].iValue);
	DDX_Text(pDX, IDC_EDIT_78, m_Sudoku.m_arrSudoku[7][8].iValue);

	DDX_Text(pDX, IDC_EDIT_80, m_Sudoku.m_arrSudoku[8][0].iValue);
	DDX_Text(pDX, IDC_EDIT_81, m_Sudoku.m_arrSudoku[8][1].iValue);
	DDX_Text(pDX, IDC_EDIT_82, m_Sudoku.m_arrSudoku[8][2].iValue);
	DDX_Text(pDX, IDC_EDIT_83, m_Sudoku.m_arrSudoku[8][3].iValue);
	DDX_Text(pDX, IDC_EDIT_84, m_Sudoku.m_arrSudoku[8][4].iValue);
	DDX_Text(pDX, IDC_EDIT_85, m_Sudoku.m_arrSudoku[8][5].iValue);
	DDX_Text(pDX, IDC_EDIT_86, m_Sudoku.m_arrSudoku[8][6].iValue);
	DDX_Text(pDX, IDC_EDIT_87, m_Sudoku.m_arrSudoku[8][7].iValue);
	DDX_Text(pDX, IDC_EDIT_88, m_Sudoku.m_arrSudoku[8][8].iValue);
}

BEGIN_MESSAGE_MAP(CSudokuDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CALCULATE, &CSudokuDlg::OnBnClickedCalculate)
	ON_BN_CLICKED(IDC_RESET, &CSudokuDlg::OnBnClickedReset)
END_MESSAGE_MAP()


// CSudokuDlg 消息处理程序

BOOL CSudokuDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
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

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CSudokuDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CSudokuDlg::OnPaint()
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
HCURSOR CSudokuDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CSudokuDlg::OnBnClickedCalculate()
{
	UpdateData(TRUE);
	m_Sudoku.InitTrue();
	m_Sudoku.Calculate(0 , 0);
	m_Sudoku.Print();
	UpdateData(FALSE);
}


void CSudokuDlg::OnBnClickedReset()
{
	m_Sudoku.Reset();
	UpdateData(FALSE);
}

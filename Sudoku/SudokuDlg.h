
// SudokuDlg.h : ͷ�ļ�
//

#pragma once
#include "Sudoku.h"

// CSudokuDlg �Ի���
class CSudokuDlg : public CDialogEx
{
// ����
public:
	CSudokuDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUDOKU_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCalculate();
	afx_msg void OnBnClickedReset();

	CSudoku m_Sudoku;
};

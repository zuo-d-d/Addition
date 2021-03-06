
// AdditionDlg.h : 头文件
//

#pragma once
#include "TipDialog.h"

// CAdditionDlg 对话框
class CAdditionDlg : public CDialogEx
{
private:
	CTipDialog *m_ptipdlg;


// 构造
public:
	CAdditionDlg(CWnd* pParent = NULL);	// 标准构造函数
	virtual ~CAdditionDlg();

// 对话框数据
	enum { IDD = IDD_ADDITION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	double m_editSummand;
	double m_editSum;
	double m_editAddend;
	afx_msg void OnBnClickedAddButton();
	afx_msg void OnStnClickedSumStatic();
	afx_msg void OnBnClickedInstructButton();
};

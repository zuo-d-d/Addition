
// AdditionDlg.h : ͷ�ļ�
//

#pragma once
#include "TipDialog.h"

// CAdditionDlg �Ի���
class CAdditionDlg : public CDialogEx
{
private:
	CTipDialog *m_ptipdlg;


// ����
public:
	CAdditionDlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~CAdditionDlg();

// �Ի�������
	enum { IDD = IDD_ADDITION_DIALOG };

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
	double m_editSummand;
	double m_editSum;
	double m_editAddend;
	afx_msg void OnBnClickedAddButton();
	afx_msg void OnStnClickedSumStatic();
	afx_msg void OnBnClickedInstructButton();
};

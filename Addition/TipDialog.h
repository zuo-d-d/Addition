#pragma once


// CTipDialog �Ի���

class CTipDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CTipDialog)

public:
	CTipDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTipDialog();

// �Ի�������
	enum { IDD = IDD_TIP_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

// TipDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "TipDialog.h"
#include "afxdialogex.h"


// CTipDialog �Ի���

IMPLEMENT_DYNAMIC(CTipDialog, CDialogEx)

CTipDialog::CTipDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTipDialog::IDD, pParent)
{

}

CTipDialog::~CTipDialog()
{
}

void CTipDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTipDialog, CDialogEx)
END_MESSAGE_MAP()


// CTipDialog ��Ϣ�������

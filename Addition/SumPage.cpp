// SumPage.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "SumPage.h"
#include "afxdialogex.h"


// CSumPage 对话框

IMPLEMENT_DYNAMIC(CSumPage, CPropertyPage)

CSumPage::CSumPage()
	: CPropertyPage(CSumPage::IDD)
{

}

CSumPage::~CSumPage()
{
}

void CSumPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSumPage, CPropertyPage)
END_MESSAGE_MAP()


// CSumPage 消息处理程序

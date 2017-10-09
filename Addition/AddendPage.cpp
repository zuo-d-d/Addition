// AddendPage.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "AddendPage.h"
#include "afxdialogex.h"


// CAddendPage 对话框

IMPLEMENT_DYNAMIC(CAddendPage, CPropertyPage)

CAddendPage::CAddendPage()
	: CPropertyPage(CAddendPage::IDD)
{

}

CAddendPage::~CAddendPage()
{
}

void CAddendPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddendPage, CPropertyPage)
END_MESSAGE_MAP()


 //CAddendPage 消息处理程序


BOOL CAddendPage::OnSetActive()
{
	// TODO: 在此添加专用代码和/或调用基类

	//获得父窗口
	CPropertySheet* psheet = (CPropertySheet*) GetParent();
	//只有完成
	psheet->SetFinishText(_T("完成"));

	return CPropertyPage::OnSetActive();
}


BOOL CAddendPage::OnWizardFinish()
{
	// TODO: 在此添加专用代码和/或调用基类
	MessageBox(_T("说明已阅读完毕"));

	return CPropertyPage::OnWizardFinish();
}

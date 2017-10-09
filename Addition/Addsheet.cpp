// Addsheet.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "Addsheet.h"


// CAddsheet

IMPLEMENT_DYNAMIC(CAddsheet, CPropertySheet)

CAddsheet::CAddsheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_summandPage);
	AddPage(&m_sumPage);
	AddPage(&m_addendPage);
}

CAddsheet::CAddsheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	AddPage(&m_summandPage);
	AddPage(&m_sumPage);
	AddPage(&m_addendPage);
}

CAddsheet::~CAddsheet()
{
}


BEGIN_MESSAGE_MAP(CAddsheet, CPropertySheet)
END_MESSAGE_MAP()


// CAddsheet 消息处理程序

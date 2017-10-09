#pragma once
#include "AddendPage.h"
#include "SummandPage.h"
#include "SumPage.h"


// CAddsheet

class CAddsheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddsheet)
private:
	CSummandPage m_summandPage;
	CSumPage m_sumPage;
	CAddendPage m_addendPage;

public:
	CAddsheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CAddsheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CAddsheet();

protected:
	DECLARE_MESSAGE_MAP()
};



// AddendPage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "AddendPage.h"
#include "afxdialogex.h"


// CAddendPage �Ի���

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


 //CAddendPage ��Ϣ�������


BOOL CAddendPage::OnSetActive()
{
	// TODO: �ڴ����ר�ô����/����û���

	//��ø�����
	CPropertySheet* psheet = (CPropertySheet*) GetParent();
	//ֻ�����
	psheet->SetFinishText(_T("���"));

	return CPropertyPage::OnSetActive();
}


BOOL CAddendPage::OnWizardFinish()
{
	// TODO: �ڴ����ר�ô����/����û���
	MessageBox(_T("˵�����Ķ����"));

	return CPropertyPage::OnWizardFinish();
}

#include <afx.h>
#include <afxdlgs.h>
#include <windows.h>
#include <iostream>
using namespace std;
/*
����̨���ļ��Ի���VC6.0
1.�½�һ���յĿ���̨����
2.Project->Setting->C/C++ ->catagory(code generation)-> using run-time library -> multithread
3.Project->Setting->General -> ѡ�� Using MFC in a Static Library
*/
int main()
{
	CFile *pFile;
	char  szFilter[] = "�ı��ĵ� (*.txt)|*.txt|All Files (*.*)|*.*||";
	char inSeqence[_MAX_PATH];

	AfxSetResourceHandle(GetModuleHandle(NULL));

	CFileDialog dlg(TRUE);

	if (dlg.DoModal() != IDOK)return 0;
	CString aaa= dlg.GetPathName();

	return 0;
}
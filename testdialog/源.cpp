#include <afx.h>
#include <afxdlgs.h>
#include <windows.h>
#include <iostream>
using namespace std;
/*
控制台打开文件对话框，VC6.0
1.新建一个空的控制台程序
2.Project->Setting->C/C++ ->catagory(code generation)-> using run-time library -> multithread
3.Project->Setting->General -> 选择 Using MFC in a Static Library
*/
int main()
{
	CFile *pFile;
	char  szFilter[] = "文本文档 (*.txt)|*.txt|All Files (*.*)|*.*||";
	char inSeqence[_MAX_PATH];

	AfxSetResourceHandle(GetModuleHandle(NULL));

	CFileDialog dlg(TRUE);

	if (dlg.DoModal() != IDOK)return 0;
	CString aaa= dlg.GetPathName();

	return 0;
}
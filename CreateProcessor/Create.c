#include <Windows.h>
#include<stdio.h>
#define PATH "C:\\Users\\�����������\\source\\repos\\Processes\\x64\\Debug\\Processes.exe"
int main()
{    
	LPSTARTUPINFOA sti = calloc(1,sizeof(STARTUPINFOA));
	LPPROCESS_INFORMATION li = calloc(1, sizeof(PROCESS_INFORMATION));
	/*TCHAR szComrnandLine[] = TEXT("C:\\Users\\�����������\\source\\repos\\Processes\\Processes\\Start.txt");*/
	CreateProcessA(
		PATH,//��� ������������ ������
		"�������� �������� ������", // ��������� ������
		NULL,//  ��������� �� ��������� SECURITY_ATTRIBUTES
		NULL,// ��������� �� ��������� SECURITY_ATTRIBUTES
		FALSE,// ���� ������������ �������� ��������
		0,// ����� �������� �������� ��������
		NULL,// ����� ���� ������������
		NULL,// ��� �������� ��������
		sti,// ���������� �������������
		li// ���������� � ��������
	);
	
	
	WaitForSingleObject(li->hProcess, INFINITE);
	DWORD ecode;
	GetExitCodeProcess(li->hProcess, &ecode);
	printf("� ������� ���������� ���������� � �����");
	
	CloseHandle(li->hProcess);
	CloseHandle(li->hThread);

	return 0;
}
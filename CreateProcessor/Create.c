#include <Windows.h>
#include<stdio.h>
#define Path "C:\\Users\\�����������\\source\\repos\\Processes\\x64\\Debug\\Processes.exe"
int main()
{    
	STARTUPINFO sti = {sizeof(sti)};
	PROCESS_INFORMATION li;
	TCHAR szComrnandLine[] = TEXT("C:\\Users\\�����������\\source\\repos\\Processes\\Processes\\Start.txt");
	CreateProcess(
		Path,//��� ������������ ������
		szComrnandLine, // ��������� ������
		NULL,//  ��������� �� ��������� SECURITY_ATTRIBUTES
		NULL,// ��������� �� ��������� SECURITY_ATTRIBUTES
		FALSE,// ���� ������������ �������� ��������
		0,// ����� �������� �������� ��������
		NULL,// ����� ���� ������������
		NULL,// ��� �������� ��������
		&sti,// ���������� �������������
		&li// ���������� � ��������
	);
	
	DWORD ecode;
	
	
	printf("� ������� ���������� ���������� � ����� %d", ecode);
	
	return 0;
}
#include <Windows.h>
#include<stdio.h>
#define PATH "C:\\Users\\ТрифоноваАР\\source\\repos\\Processes\\x64\\Debug\\Processes.exe"
int main()
{    
	LPSTARTUPINFOA sti = calloc(1,sizeof(STARTUPINFOA));
	LPPROCESS_INFORMATION li = calloc(1, sizeof(PROCESS_INFORMATION));
	/*TCHAR szComrnandLine[] = TEXT("C:\\Users\\ТрифоноваАР\\source\\repos\\Processes\\Processes\\Start.txt");*/
	CreateProcessA(
		PATH,//имя исполняемого модуля
		"аргуметы комадной строки", // командная строка
		NULL,//  Указатель на структуру SECURITY_ATTRIBUTES
		NULL,// Указатель на структуру SECURITY_ATTRIBUTES
		FALSE,// Флаг наследования текущего процесса
		0,// Флаги способов создания процесса
		NULL,// новый блок конфигурации
		NULL,// имя текущего каталога
		sti,// информация предустановки
		li// информация о процессе
	);
	
	
	WaitForSingleObject(li->hProcess, INFINITE);
	DWORD ecode;
	GetExitCodeProcess(li->hProcess, &ecode);
	printf("Я дождусь завершения процессора с кодом");
	
	CloseHandle(li->hProcess);
	CloseHandle(li->hThread);

	return 0;
}
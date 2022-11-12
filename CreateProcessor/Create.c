#include <Windows.h>
#include<stdio.h>
#define Path "C:\\Users\\ТрифоноваАР\\source\\repos\\Processes\\x64\\Debug\\Processes.exe"
int main()
{    
	STARTUPINFO sti = {sizeof(sti)};
	PROCESS_INFORMATION li;
	TCHAR szComrnandLine[] = TEXT("C:\\Users\\ТрифоноваАР\\source\\repos\\Processes\\Processes\\Start.txt");
	CreateProcess(
		Path,//имя исполняемого модуля
		szComrnandLine, // командная строка
		NULL,//  Указатель на структуру SECURITY_ATTRIBUTES
		NULL,// Указатель на структуру SECURITY_ATTRIBUTES
		FALSE,// Флаг наследования текущего процесса
		0,// Флаги способов создания процесса
		NULL,// новый блок конфигурации
		NULL,// имя текущего каталога
		&sti,// информация предустановки
		&li// информация о процессе
	);
	
	DWORD ecode;
	
	
	printf("Я дождусь завершения процессора с кодом %d", ecode);
	
	return 0;
}
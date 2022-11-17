#include <stdio.h>

int main(int args, char* argv[])
{
	system("chcp 1251>nul");
	for (size_t i = 0; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	system("pause");

	return 0;
}
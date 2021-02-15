#include<iostream>
#include<Windows.h>

int main( )
{
	HANDLE hFile;
	LPCSTR path="C:\\Users\\BraveHero\\opt\\Win32_Programming\\ssup.txt";

	hFile = CreateFile(
		path,
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ,
		NULL,
		CREATE_NEW,
		FILE_ATTRIBUTE_NORMAL,
		NULL
		);

	if (hFile == INVALID_HANDLE_VALUE)
		printf("Error\n");
	else
		printf("Success\n");


	BOOL handle = CloseHandle(hFile);
	system("PAUSE");
	return 0;
}

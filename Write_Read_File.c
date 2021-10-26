#include<stdio.h>
#include<Windows.h>

void main( )
{
	HANDLE hFile;
	BOOL bFile;
	BOOL rFile;
	char chBuffer[]="This is the sample program of Win32 API";
	DWORD dwNoByteToWrite = strlen(chBuffer);
	DWORD dwNoByteWritten = 0;
	DWORD dwNoByteToRead = strlen(chBuffer);
	DWORD dwNoByteRead = 0;
	LPCSTR path="C:\\Users\\BraveHero\\opt\\Win32-Programming\\ssup.txt";

	//Create File System Call
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
	{
		printf("Error in creating the file\n");
		printf("%d\n",GetLastError());
	}

	else
		printf("Success in creating the file\n");

	//Write File System Call
	bFile = WriteFile(
		hFile,
		chBuffer,
		dwNoByteToWrite,
		&dwNoByteWritten,
		NULL
	);
	if (bFile == FALSE)
		printf("Error Writing the File\n");
	else
		printf("Success in writing the file\n");

	//Read File System Call
	rFile = ReadFile(
		hFile,
		chBuffer,
		dwNoByteToRead,
		&dwNoByteRead,
		NULL
	);

	if (rFile == FALSE)
		printf("Error Reading the File\n");
	else
		printf("Success in reading the file\n");

	BOOL handle = CloseHandle(hFile);
	system("PAUSE");
	
}

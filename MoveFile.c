#include<Windows.h>
#include<stdio.h>


void main()
{
	BOOL mFile;
	LPCSTR Oldpath="C:\\Users\\BraveHero\\opt\\Win32_Prog\\hello";
	LPCSTR Newpath="C:\\Users\\BraveHero\\opt\\newfile";
	mFile = MoveFile(
		Oldpath,
		Newpath
		);

	if(!mFile)
		printf("Error\n");
	else
		printf("success\n");
	system("PAUSE");
	
}
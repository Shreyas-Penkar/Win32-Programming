#include<Windows.h>
#include<stdio.h>

void main()
{
	BOOL bFile;
	LPCSTR Oldpath="C:\\Users\\BraveHero\\opt\\Win32_Prog\\hello";
	LPCSTR Newpath="C:\\Users\\BraveHero\\opt\\Win32_Prog\\Newhello";
	bFile = CopyFile(
		Oldpath,
		Newpath,
		TRUE
		);

	if(!bFile)
		printf("Error\n");
	else
		printf("success\n");
	system("PAUSE");
	
}

#include<Windows.h>
#include<stdio.h>

void main()
{
	BOOL bDir,rDir;
	LPCSTR path="C:\\Users\\BraveHero\\opt\\Win32_Prog\\sample_dir";
	bDir = CreateDirectoryA(
		path,
		NULL
		);

	if(!bDir)
		printf("Creating Directory Failed wih Error No. - %d\n",GetLastError());
	else
		printf("Creating Directory Success\n");
	

	rDir = RemoveDirectoryA(
		path
		);

	if(!bDir)
		printf("Removing Directory Failed wih Error No. - %d\n",GetLastError());
	else
		printf("Removing Directory Success\n");

	system("PAUSE");
	
}
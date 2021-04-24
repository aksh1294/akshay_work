
/*
Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/
//////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char str[])
{
	int icnt=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
		icnt++;
		}
		str++;
	}
	return icnt;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountSmall(arr);
	
	printf("The number of small is %d",iRet);
	return 0;
}
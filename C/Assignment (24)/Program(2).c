
/*
Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/
//////////////////////////////////////////////

#include<stdio.h>

void struprx(char str[])
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
	
}

int main()
{
	char arr[40];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	struprx(arr);
	
	printf("%s",arr);
	
	return 0;
}
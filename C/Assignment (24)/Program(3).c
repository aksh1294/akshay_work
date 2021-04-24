
/*
Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/
//////////////////////////////////////////////

#include<stdio.h>

void strToggle(char str[])
{
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			*str=*str+32;
		}
		else if(*str>='a' && *str<='z')
		{
			*str=*str-32;
		}
	
		str++;
	}
	
}

int main()
{
	char arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	strToggle(arr);
	printf("The difference %s",arr);
	return 0;
}
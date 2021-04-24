
/*
Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/
//////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char str[])
{
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+('a'-'A');
			//printf("%c",*str);
		}
		/*else
		{
			*str=*str;
			//printf("%c",*str);
		}*/
		str++;
	}
	
}

int  main()
{
	char arr[40];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	strlwrx(arr);
	
	printf("The updated string is %s",arr);
	return 0;
}
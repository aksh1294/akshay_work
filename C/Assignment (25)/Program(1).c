
/*
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/
//////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char *str, char cval)
{
	if(str==NULL)
	{
		return FALSE;
	}
	while(*str!='\0')
	{
		if(*str==cval)
		{
			break;
		}
		str++;
	}
	if(*str=='\0')
	{
		/*printf("no %c",*str);*/
		return FALSE;
	}
	else
	{
		/*printf("Yes %c",*str);*/
		return TRUE;
	}
}

int main()
{
	char arr[30];
	char ch='\0';
	
	BOOL bret=FALSE;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("enter the character\n");
	scanf(" %c",&ch);
	
	bret=Display(arr,ch);
	
	if(bret==TRUE)
	{
		printf("present");
	}
	else
	{
		printf(" Not Present");
	}
	
	return 0;
}

/*
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
		 M
Output : 0
*/
//////////////////////////////////////////////

#include<stdio.h>

int chkindex(char *str,char cval)
{
	int i=0;
	int icnt=0;
	while(*str!='\0')
	{
		if(*str==cval)
		{
			icnt=i;
			break;
		}
		i++;
		str++;
	}
	if(*str=='\0')
	{
		return -1;
	}
	else
	{
		return icnt;
	}
	
	
}
int main()
{
	char arr[40];
	char ch='\0';
	int iret=0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character\n");
	scanf(" %c",&ch);
	
	iret=chkindex(arr,ch);
	
	printf("The first occurrence is at %d",iret);
	
	return 0;
}


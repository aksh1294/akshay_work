
/*
Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/
//////////////////////////////////////////////

#include<stdio.h>

int Freqency(char str[],char cval)
{
	int icnt=0;
	while(*str!='\0')
	{
		if(*str==cval)
		{
			icnt++;
		}
		str++;
	}
	return icnt;
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
	
	iret=Freqency(arr,ch);
	
	printf("The frequency is %d",iret);
	return 0;
}
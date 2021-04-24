
/*
5. Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/
//////////////////////////////////////////////

#include<stdio.h>

int CountSpace(char str[])
{
	int icnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str==' ')
		{
			icnt++;
		}
		str++;
	}
	return icnt;
}

int main()
{
	char arr[50];
	int iret=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	iret=CountSpace(arr);
	
	printf("The space are %d",iret);
	
	return 0;
}
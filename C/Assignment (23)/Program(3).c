
/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/
//////////////////////////////////////////////

#include<stdio.h>

int DiffSmalCap(char str[])
{
	int icnt1=0;
	int icnt2=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			icnt1++;
		}
		else if(*str>='a' && *str<='z')
		{
			icnt2++;
		}
		else
		{
			icnt1=0;
			icnt2=0;
		}
		str++;
	}
	return icnt2-icnt1;
}

int main()
{
	char arr[20];
	int iret=0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	iret=DiffSmalCap(arr);
	printf("The difference %d",iret);
	return 0;
}
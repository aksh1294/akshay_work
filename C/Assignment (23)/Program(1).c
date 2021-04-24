
/*
Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
//////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char str[])
{
	int icnt=0;
	printf("Inside");
	
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
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
	
	iRet=CountCapital(arr);
	printf("The count of capital characters is %d",iRet);
	
	return 0;

}
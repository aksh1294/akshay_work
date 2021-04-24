
/*
Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/
//////////////////////////////////////////////


#include<stdio.h>

void strcpyCaps(char src[], char dest[])
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
		*dest=*src;
		 dest++;
		}
		src++;
		
	}
	*dest='\0';
}

int main()
{
	char arr[40];
	char brr[40];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	strcpyCaps(arr,brr);
	
	printf("%s",brr);
	return 0;
}
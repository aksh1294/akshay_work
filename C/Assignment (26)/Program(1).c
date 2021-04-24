
/*
Write a program which accept string from user and copy the
contents of that string into another string.
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/
//////////////////////////////////////////////
#include<stdio.h>

void strcpyX(char src[], char dest[])
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[40];
	char brr[40];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	strcpyX(arr,brr);
	
	
	printf("%s",brr);
	return 0;
}
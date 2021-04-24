
/*Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”
*/
//////////////////////////////////////////////

#include<stdio.h>

void strcpySmall(char src[], char dest[])
{
	if(src==NULL || dest==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
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
	
	strcpySmall(arr,brr);
	
	printf("%s",brr);
	return 0;
}
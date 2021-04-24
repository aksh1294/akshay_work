
/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
*/
//////////////////////////////////////////////

#include<stdio.h>

void strncpyX(char src[], char dest[], int ival)
{
	if(src==NULL || dest==NULL||ival<0)
	{
		return;
	}
	while((*src!='\0')&&(ival>0))
	{
		*dest=*src;
		src++;
		dest++;
		ival--;
	}
	*dest='\0';
}

int main()
{
	char arr[40];
	char brr[40];
	int iNO=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter a number\n");
	scanf("%d",&iNO);
	
	strncpyX(arr,brr,iNO);
	
	printf("%s",brr);
	return 0;
}
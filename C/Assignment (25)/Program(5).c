
/*
Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
*/
//////////////////////////////////////////////

#include<stdio.h>

void reverse(char *str)
{
	char *start=str;
	char *end=str;
	char temp;
	if(str==NULL)
	{
		return;
	}
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

int main()
{
	char arr[50];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	reverse(arr);
	
	printf("The space are %s",arr);
	
	return 0;
}
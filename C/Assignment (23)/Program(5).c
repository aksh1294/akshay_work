
/*
5. Write a program which accept string from user and display it inn
reverse order.
*/
//////////////////////////////////////////////

#include<stdio.h>

void DisplayRev(char str[])
{
	int icnt=0; int i=0;
	while(*str!=0)
	{
		icnt++;
		str++;
	}
	str--;
	for(;icnt>=0;icnt--,str--)
	{
		printf("%c",*str);
	}
}

int main()
{
	char arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	DisplayRev(arr);
	
	return 0;
}
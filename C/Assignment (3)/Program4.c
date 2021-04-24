#include<stdio.h>

void Display(char cchar)
{
	if(cchar>='a'&& cchar<='z')
	{
		printf("%c",cchar-32);
	}
	else if(cchar>='A'&& cchar<='Z')
	{
		printf("%c",cchar+32);
	}
}

int main()
{
	
	char cValue='\0';
	printf("Enter a chaeracter\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}


/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
*/
//////////////////////////////////////////////

#include<stdio.h>

void Display(char cVal)
{
	if((cVal>='A') && (cVal<='Z')) 
	{
		for(;cVal<='Z';cVal++)
		{
			printf("%c\t",cVal);
		}
	}
	else if((cVal>='a') && (cVal<='z'))
	{
		for(;cVal>='a';cVal--)
		{
			printf("%c\t",cVal);
		}
	}
	else
	{
		printf("not a character\n");
		return;
	}
}


int main()
{
	char ch='\0';
	
	printf("Enter the charachter\n");
	scanf("%c",&ch);
	
	Display(ch);
	return 0;
}

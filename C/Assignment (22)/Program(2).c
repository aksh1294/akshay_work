
/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/
//////////////////////////////////////////////

#include<stdio.h>
void Display(char cVal)
{
	if(cVal>='a' && cVal<='z')
	{
		cVal=cVal-32;
		printf("The converted value is %c",cVal);
	}
	else if(cVal>='A' && cVal<='Z')
	{
		cVal=cVal+32;
		printf("The converted value is %c",cVal);
	}
	else
	{
		printf("No conversion available %c",cVal);
	}
}

int main()
{
	char ch='\0';
	
	printf("Enter a characher\n");
	scanf("%c",&ch);
	
	Display(ch);
	
	return 0;
}
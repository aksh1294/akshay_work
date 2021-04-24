
/*
5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
		 Octal 0101
		 Hexadecimal 0X41
*/
//////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII(char cVal)
{
	printf("Character: %c\n",cVal);
	printf("Decimal: %d\n",cVal);
	printf("Octal: %o\n",cVal);
	printf("Hexadecimal: %x\n",cVal);
}

int main()
{
	char ch='\0';
	
	printf("Enter the Division\n");
	scanf("%c",&ch);
	
	DisplayASCII(ch);
	
	return 0;
}
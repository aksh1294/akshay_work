
/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255
*/
//////////////////////////////////////////////

#include<stdio.h>

void DispalyASCII()
{
	int i=0;
	for(i=0;i<=255;i++)
	{
		printf("%c\t:%d\t:%o\t:%x\t \n",i,i,i,i);
	}
}

int main()
{
	DispalyASCII();
	
	return 0;
}


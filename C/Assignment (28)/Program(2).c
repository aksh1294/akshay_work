
/*
Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

unsigned int OffBit(unsigned int iNO)
{
	unsigned int iMask=0XFFFFFDBF;
	unsigned int iret=0;
	
	iret= iNO & iMask;
	
	return iret;
}

int main()
{
	unsigned int iva=0;
	unsigned int iRet=0;
	
	printf("Enter a number\n");
	scanf("%u",&iva);
	
	iRet=OffBit(iva);
	
	printf("%d",iRet);
	
	return 0;
}
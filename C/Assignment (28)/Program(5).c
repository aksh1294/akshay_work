
/*Write a program which accept one number from user and on its first 4
bits. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OnBit(UNIT iNo)
{
	UNIT iMask=0X0000000F;
	UNIT iret=0;
	
	iret=iNo | iMask;
		
	return iret;
}

int main()
{
	UNIT ival=0;
	UNIT uRet=0;
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	uRet=OnBit(ival);
	
	printf("%d",uRet);
	return 0; 
}
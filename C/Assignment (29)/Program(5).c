
/*Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
	UNIT iMask=0XF000000F;
	int iret=0;
	
	iret=iNo ^ iMask;
	
	return iret;
}

int main()
{
	UNIT ival=0;
	UNIT uRet=0;
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	
	uRet=ToggleBit(ival);
	
	printf("%d",uRet);
	return 0; 
}
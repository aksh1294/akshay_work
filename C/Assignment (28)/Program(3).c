
/*
Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
	UNIT iMask=0X00000040;
	UNIT iret=0;
	
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
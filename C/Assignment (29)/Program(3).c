
/*
Write a program which accept one number and position from user and on
that bit. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OnBit(UNIT iNo,int iPos)
{
	UNIT iMask=0X00000001;
	UNIT iret=0;
	
	iMask=iMask<<(iPos-1);
	
	iret=iNo ^ iMask;
	
	return iret;
}

int main()
{
	UNIT ival=0;
	UNIT uRet=0;
	int ino=0;
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	printf("Enter the position\n");
	scanf("%u",&ino);
	
	uRet=OnBit(ival,ino);
	
	printf("%d",uRet);
	return 0; 
}
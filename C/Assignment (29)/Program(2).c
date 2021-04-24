
/*
Write a program which accept one number and position from user and off
that bit. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo,int iPos)
{
	UNIT iMask=0X00000001;
	UNIT iret=0;
	
	if(iPos<1||iPos>32)
	{
		return 0;
	}
	iMask=iMask<<(iPos-1);
	iMask=~iMask;
	
	iret=iNo & iMask;
	
	return iret;
}

int main()
{
	UNIT ival=0;
	int iNo=0;
	UNIT uret=0;
	
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	printf("Enter the position\n");
	scanf("%u",&iNo);
	
	uret=CheckBit(ival,iNo);
	
	printf("%d",uret);
	
	return 0; 
}
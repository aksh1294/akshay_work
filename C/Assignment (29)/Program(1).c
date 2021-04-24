
/*
Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UNIT;
typedef int BOOL;

UNIT CheckBit(UNIT iNo,int iPos)
{
	UNIT iMask=0X00000001;
	UNIT iret=0;
	
	if(iPos<1||iPos>32)
	{
		return FALSE;
	}
	iMask=iMask<<(iPos-1);
	
	iret=iNo & iMask;
	
	if(iret==iMask)
	{
	return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UNIT ival=0;
	int iNo=0;
	BOOL bret=FALSE;
	
	printf("Enter the number\n");
	scanf("%u",&ival);
	printf("Enter the position\n");
	scanf("%u",&iNo);
	
	bret=CheckBit(ival,iNo);
	
	if(bret==TRUE)
	{
		printf("The bit is on\n");
	}
	else
	{
		printf("the bit is off\n");
	}
	return 0; 
}
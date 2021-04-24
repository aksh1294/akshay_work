
/*
Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
*/
//////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int UNIT;
typedef int BOOL;
BOOL CheckBit(UNIT iNo)
{
	UNIT iMask1=0X00000100;
	UNIT iMask2=0X00000800;
	UNIT iMask=0;
	UNIT iret=0;
	
	iMask=iMask1 | iMask2;
	
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
	BOOL bret=FALSE;

	printf("Enter the number\n");
	scanf("%u",&ival);

	bret=CheckBit(ival);
	
	if(bret==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0; 
}
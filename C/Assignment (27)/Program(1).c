
/*
Write a program which checks whether 15th bit is On or OFF.
*/
//////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(unsigned int iNo)
{
	unsigned int iMask=0X00004000;
	int iret=0;
	
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
	unsigned int ival=0;
	BOOL bret=FALSE;
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	bret=CheckBit(ival);
	
	if(bret==TRUE)
	{
		printf("The 15 bit is on\n");
	}
	else
	{
		printf("The 15 bit is off\n");
	}
}

/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
*/
//////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef unsigned int UNIT;
typedef int BOOL;

BOOL CheckBit(UNIT iNo,int iPos1,int iPos2)
{
	UNIT iMask1=0X00000001;
	UNIT iMask2=0X00000001;
	UNIT iMask=0;
	UNIT iret=0;
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
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
	int iNo1=0;
	int iNo2=0;
	
	BOOL bret=FALSE;

	printf("Enter the number\n");
	scanf("%u",&ival);
	printf("Enter the 1st positon\n");
	scanf("%u",&iNo1);
	printf("Enter the second positon\n");
	scanf("%u",&iNo2);
	
	bret=CheckBit(ival,iNo1,iNo2);
	
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
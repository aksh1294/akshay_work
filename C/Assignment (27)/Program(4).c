
/*Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(unsigned int iNo)
{
	unsigned int iMask=0X000001C0;
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
		printf("The bit is on\n");
	}
	else
	{
		printf("The bit is off\n");
	}
}
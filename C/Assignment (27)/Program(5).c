
/*Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(unsigned int iNo)
{
	unsigned int iMask=0X80000001;
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

/*
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
*/
//////////////////////////////////////////////
#include<stdio.h>

unsigned int Offbit(unsigned int iNo)
{
	unsigned int iMask=0XFFFFFFBF;
	unsigned int iret=0;
	iret=iNo & iMask;
	
	return iret;
}

int main()
{
	unsigned int ival=0;
	 unsigned int iRet=0;
	
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	iRet=Offbit(ival);
	
	printf("The modified number after the off bit %d",iRet);
	
	return 0;
}
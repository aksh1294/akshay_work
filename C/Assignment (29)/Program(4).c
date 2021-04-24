
/*Write a program which accept one number and position from user and
toggle that bit. Return modified number.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo,int iPos)
{
	UNIT iMask=0X00000001;
	int iret=0;
	iMask=iMask<<(iPos-1);
	
	iret=iNo ^ iMask;
	
	return iret;
}

int main()
{
	UNIT ival=0;
	UNIT uRet=0;
	int iNo=0;
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	printf("Enter the number\n");
	scanf("%u",&iNo);
	
	uRet=ToggleBit(ival,iNo);
	
	printf("%d",uRet);
	return 0; 
}
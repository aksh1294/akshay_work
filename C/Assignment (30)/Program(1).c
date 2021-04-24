
/*
Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT CountOne(UNIT iNo)
{
	UNIT iMask=0X00000001;
	UNIT iret=0;
	int icnt=0; int i=0;
	
	for(i=1;i<=32;i++)
	{
		iret=iNo & iMask;
		if(iret==iMask)
		{
			icnt++;
		}
		iMask=iMask<<1;
	}
	return icnt;
	
}

int main()
{
	UNIT ival=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%u",&ival);
	
	iRet=CountOne(ival);
	
	printf("%d",iRet);
	return 0; 
}
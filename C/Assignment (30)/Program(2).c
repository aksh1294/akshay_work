
/*
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

void CommonBit(UNIT iNo1,UNIT iNo2)
{
	UNIT iMask=0X00000001;
	UNIT iret1=0;
	UNIT iret2=0;
	int i=0;
	
	iret1=iNo1 & iNo2;
	
	for(i=1;i<32;i++)
	{
		iret2=iret1 & iMask;
		if(iret2==iMask)
		{
			printf("%d\t",i);
		}
		iMask=iMask<<1;
	}
	
}

int main()
{
	UNIT ival1=0;
	UNIT ival2=0;
	
	printf("Enter the number\n");
	scanf("%u",&ival1);
	
	printf("Enter the numbber2\n");
	scanf("%u",&ival2);
	
	CommonBit(ival1,ival2);
	
	return 0; 
}
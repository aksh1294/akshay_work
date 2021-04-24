
/*Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
*/
//////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo,int iStar,int iEnd)
{
	//UNIT iMask1=0X00000001;
	//UNIT iMask2=0X00000001;
	int iret=0; int i=0; int iAns=0;
	UNIT iMask=0X00000001;
	//iMask1=iMask1<<(iStar-1);
	//iMask2=iMask2<<(iEnd-1);
	
	
	  //iMask=iMask1 ^ iMask2;
	  iret=iNo ^ iMask;
	  iMask=iMask<<1;
	
	return iAns;
}

int main()
{
	UNIT ival=0;
	UNIT uRet=0;
	int iNo1=0;
	int iNo2=0;
	
	printf("Enter the number\n");
	scanf("%u",&ival);
	printf("Enter the 1st positon\n");
	scanf("%u",&iNo1);
	printf("Enter the second positon\n");
	scanf("%u",&iNo2);
	
	uRet=ToggleBit(ival,iNo1,iNo2);
	
	printf("%d",uRet);
	return 0; 
}
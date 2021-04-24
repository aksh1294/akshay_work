//Accept number from user and check whether it contains 0 in it or not.
/////////////////////////////////////////////
//Function: CheckZero
//Input: 12904
//Output: It contains the zero digit.
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int ival)
{
	int digit=0;
	int iAns=0;
	if(ival<0)
	{
		ival=-ival;
	}
	while(ival!=0)
	{
		digit=ival%10;
		printf("%d",digit);
		if(digit==0)
		{
			return TRUE;
		}
		
		ival=ival/10;
	}
	
}
	 


int main()
{
	int iNo=0;
	BOOL iRet=FALSE;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	
	iRet=CheckZero(iNo);
	if(iRet==TRUE)
	{
		printf("The number contains the digit 0");
	}
	else
	{
		printf("There is no zero in the digit");
	}
	return 0;
}
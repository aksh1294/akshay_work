#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkeven(int iValue)
{
	if(iValue%2==0)
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
	int iN01=0;
	printf("Enter the no\n");
	scanf("%d",&iN01);
	BOOL iret=FALSE;	
	iret=checkeven(iN01);
	if(iret==TRUE)
	{
		printf("The no is even");
	}
	else
	{
		printf("The no us odd");
	}		
	return 0;
	
}
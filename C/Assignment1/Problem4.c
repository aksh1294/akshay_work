#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNO1)
{
	if((iNO1%5)==0)
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
	int iValue=0;
	BOOL bret=FALSE;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	bret=Check(iValue);
	
	if(bret==TRUE)
	{
		printf("Divisible by 5");
		
	}
	else
	{
		printf("Not divisible by 5");
	}
	
	return 0;
}
//Aaccept no from user and display below pattern
/////////////////////////////////////////////
//Function: Pattern
//Input: 8
//Output: 2 4 6 8 10 12 14 16
//////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iVal1)
{
	
	int iCnt=0;
	int iAns=1;
	
	if(iVal1<0)
	{
		iVal1=-iVal1;
	}
	
	for(iCnt=1;iCnt<=iVal1;iCnt++)
	{
		iAns=iCnt*2;
		printf("%d ",iAns);
	}
	
	
}


int main()
{
	int iNo1=0;
	
	printf("Enter start no\n");
	scanf("%d",&iNo1);
	
	
	Pattern(iNo1);
	
	return 0;
}
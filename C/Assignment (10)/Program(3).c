//Aaccept no from user and display no and * till user sent no
/////////////////////////////////////////////
//Function: Pattern
//Input: 5
//Output: 1*2*3*4*5*
//////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iVal1)
{
	
	int iCnt=0;
	
	if(iVal1<0)
	{
		iVal1=-iVal1;
	}
	
	for(iCnt=1;iCnt<=iVal1;iCnt++)
	{
		printf("%d * ",iCnt);
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
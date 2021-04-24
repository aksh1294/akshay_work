//Aaccept number from user and print numbers till that number.
/////////////////////////////////////////////
//Function: Display
//Input: 10
//Output: 1 2 3 4 5 6 7 8 9 10
//////////////////////////////////////////////

#include<stdio.h>

int Display(int iNo)
{
	
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for (iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d ",iCnt);
	}
	
}

int main()
{
	int iVal=0;
	
	
	printf("Entetr a no\n");
	scanf("%d",&iVal);
	
	Display(iVal);
	
	return 0;
}


//Aacept number from user and print its numbers line.
/////////////////////////////////////////////
//Function: Count
//Input: 1234
//Output: 1
//////////////////////////////////////////////

#include<stdio.h>
void Display(int iVal)
{
	
	int iCnt=0;
	if(iVal<0)
	{
		iVal=-iVal;
	}
	for(iCnt=-iVal; iCnt<=iVal; iCnt++)
	{
		printf("%d ",iCnt);
	}
	
}


int main()
{
	int iNo=0;
	
	printf("Enter a no\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}
//Accept number from user and print that number of $ & * on screen.
/////////////////////////////////////////////
//Function: Pattern
//Input: 5
//Output: 2
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int ival)
{
	int iCnt=0;
	if(ival<0)
	{
		ival=-ival;
	}
	for(iCnt=0;iCnt<=ival;iCnt++)
	{
		/*printf("$ * ")*/
		printf("$ ");
		printf("* ");
	}
	
}

int main()
{
	int iNo=0;

	printf("Enter a no\n");
	scanf("%d",&iNo);
	Pattern(iNo);
	return 0;
}
//Accept N and print first 5 multiples of N.
//
/////////////////////////////////////////////
//Function: Multiple
//Input: 4
//Output: 4 8 12 16 20
//////////////////////////////////////////////

#include<stdio.h>

void Multiple(int iNo)
{
	int icnt=0;
	int iAns=1; 
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(icnt=1;icnt<=5;icnt++)
	{
		iAns=iNo*icnt;
		printf("%d ",iAns);
	}
	
	
}

int main()
{
	int ival=0;

	printf("Enter the no\n");
	scanf("%d",&ival);
	
	Multiple(ival);
	
	return 0;
}
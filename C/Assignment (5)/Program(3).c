//Accept a no from user and display the non factors of it.
/////////////////////////////////////////////
//Function: NonFact
//Input: 12
//Output: 6 4 3 2 1
//////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
		printf("%d ",i);
		}
	}
}

int main()
{
	int ival=0;
	printf("Enter the no\n");
	scanf("%d",&ival);
	NonFact(ival);

	return 0;
}

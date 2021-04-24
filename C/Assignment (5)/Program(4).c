//Accept a no from user and display the summation of its non factor
/////////////////////////////////////////////
//Function: SumFact
//Input: 12
//Output: 50
//////////////////////////////////////////////

#include<stdio.h>

int SumFact(int ival)
{
	int i=0;
	int iAns=0;
	if(ival<0)
	{
		ival=-ival;
	}
	for(i=1;i<ival;i++)
	{
		if(ival%i!=0)
		{
			printf("%d ",i);
			iAns=iAns+i;
		}
	}
	return iAns;
}

int main()
{
	int iNo=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	
	int iRet=SumFact(iNo);
	printf("\nThe summation is %d\n",iRet);
	
	return 0;
}
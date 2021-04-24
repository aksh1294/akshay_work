//Accept a no from user and display the difference in summation of its factor and non factor
/////////////////////////////////////////////
//Function: DiffFact
//Input: 12
//Output: -34
//////////////////////////////////////////////

#include<stdio.h>

int DiffFact(int ival)
{
	int i=0;
	int iAns1=0;
	int iAns2=0;
	if(ival<0)
	{
		ival=-ival;
	}	
	
	for(i=1;i<ival;i++)
	{
		if(ival%i==0)
		{
			iAns1=iAns1+i;
		}
		if(ival%i!=0)
		{
			iAns2=iAns2+i;
		}
	}
	return iAns1-iAns2;
}

int main()
{
	int  iNo=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	iRet=DiffFact(iNo);
	
	printf("The difference is %d",iRet);
	return 0;
}
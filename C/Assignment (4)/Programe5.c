#include<stdio.h>


void Display(int iValue)
{
	int i=0;
	int iAns1=0;
	int iAns2=0;
	int iDiff=0;
	
	for (i=1;i<iValue;i++)
	{
		if(iValue%i==0)
		{
			iAns1=iAns1+i;
		}
		if(iValue%i!=0)
		{
			iAns2=iAns2+i;
		}
	}
	iDiff= iAns1-iAns2;
	printf("%d",iDiff);
	
}
int main()
{
	int iNO=0;
	
	printf("Enter a no\n");
	scanf("%d",&iNO);
	
	Display(iNO);
	
	return 0;
}
#include<stdio.h>

void MultiFactor(int iValue)
{
	int i=0;
	int iAns=1;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(i=1; i<iValue; i++)
	{
		if(iValue%i==0)
		{
			printf("%d\n",i);
			iAns=iAns*i;	
		}
	}
	printf("%d",iAns);
}

int main()
{
	int iNo=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	MultiFactor(iNo);
	return 0;
}
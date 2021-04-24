#include<stdio.h>

int DisplayNonFact(int iValue)
{
	int i=0;
	for(i=1; i<=iValue;i++)
	{
		if(iValue%i!=0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iNO=0;
	printf("Enter the no\n");
	scanf("%d",&iNO);
	DisplayNonFact(iNO);
	return 0;
}
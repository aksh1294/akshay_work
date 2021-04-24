#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	if(iValue<=0)
	{
		iValue=-iValue;
	}
	
	for(i=1;i<=iValue;i++)
	{
		if(iValue%i==0)
		{
			printf("%d",i);
		}
	}
}


int main()
{
	int iN01=0;
	
	printf("Enter a no\n");
	scanf("%d",&iN01);
	
	Display(iN01);
	return 0;
	
}
#include<stdio.h>


void Display(int iValue)
{
	int i=0;
	for(i=1; i<=iValue; i++)
	{	
		int iAns=0;
		iAns=i*2;
		printf("%d",iAns);
		
	}
}

int main()
{
	int iN0=0;
	printf("Enter the no\n");
	scanf("%d",&iN0);
	Display(iN0);
	return 0;
}
#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	
	for(i=1;i<=iValue;i++)
	{
		printf("*");
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
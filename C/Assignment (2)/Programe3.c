#include<stdio.h>

void Display(int iValue)
{
	if(iValue<10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}

int main()
{
	int iN01=0;
	printf("Enter the no\n");
	scanf("%d",&iN01);
	Display(iN01);
	return 0;
	
}
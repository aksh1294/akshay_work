#include<stdio.h>

void Display(int iValue1, int iValue2)
{
	int i=0;
	for(i=1; i<=iValue2; i++)
	{
		printf("%d", iValue1);
		
	}
}


int main()
{
	int iN01=0;
	int iN02=0;
	printf("Enter the no\n");
	scanf("%d",&iN01);
	
	printf("Enter the no of times\n");
	scanf("%d",&iN02);
	
	Display(iN01,iN02);
	
	return 0;
}
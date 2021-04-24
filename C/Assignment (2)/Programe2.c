#include<stdio.h>

void Display(int iValue)
{
	
	while(iValue>0)
	{
		printf("*");
		iValue--;
	}
}



int main()
{
	int iN01=0;
	printf("Enter the no");
	scanf("%d",&iN01);
	
	Display(iN01);
	return 0;
}
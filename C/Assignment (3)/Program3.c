#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	
	if(iValue <= 0)
	{
		iValue = -iValue;
	}

		
	for(i=1; i<=iValue; i++)
	{
		if(iValue%i==0&&i%2==0)
		{	
			printf("%d",i);
		}
			
	}
}


int main()
{
	int iNO=0;
	
	printf("Enter a no\n");
	scanf("%d",&iNO);
	
	Display(iNO);
	return 0;
}
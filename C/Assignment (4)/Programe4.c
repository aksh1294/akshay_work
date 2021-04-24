#include<stdio.h>

void MultNonfact(int iValue)
{
	int i=0;
	int iAns=0;
	for(i=1;i<=iValue;i++)
	{
		if(iValue%i!=0)
		{
			printf("%d ",i);
			iAns=iAns+i;
			
		}
		
	}
	printf("%d\n",iAns);
}
int main()
{
	int iNO=0;
	printf("Enter the no\n");
	scanf("%d",&iNO);
	MultNonfact(iNO);
	return 0;
}
#include<stdio.h>

void FactRev(int iValue)
{
	int i=0;
	for(i=iValue-1;i>0;i--)
	{
		if(iValue%i==0)
		{
			printf("%d\n",i);
		}
	}

}

int main()
{
	int iNO=0;
	printf("Enter the no\n");
	scanf("%d",&iNO);
	FactRev(iNO);
	return 0;
}
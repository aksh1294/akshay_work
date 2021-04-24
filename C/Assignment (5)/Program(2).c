//Accept a no from user and display factors in reverse.
/////////////////////////////////////////////
//Function: FactRev
//Input: 12
//Output: 6 4 3 2 1
//////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
	int i=iNo/2;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(i!=0)
	{
		if(iNo%i==0)
		{
			printf("%d ",i);
			
		}
		i--;
	}
	
	/*for(i=iNo-1;i>0;i--)
	{
		if(iNo%i==0)
		{
		printf("%d ",i);
		}
	}*/
}

int main()
{
	int ival=0;
	printf("Enter the no\n");
	scanf("%d",&ival);
	FactRev(ival);

	return 0;
}

//Accept a no from user and display the multiplication of its factor
/////////////////////////////////////////////
//Function: MultFact
//Input: 12
//Output: 144
//////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
	int i=0;
	int iAns=1;
	if(iNo==0)
	{
		printf("Please enter a valid number");
		return 0;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
		
	for(i=1;i<=iNo/2;i++)
	{
		if(iNo%i==0)
		{
		printf("%d",i);
		iAns=iAns*i;
		}
	}
	return iAns;
}


int main()
{
	int ival=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&ival);

	iRet=MultFact(ival);
	printf("\nThe mutltiplication of the factor is %d \n",iRet);
	return 0;
}
//Aaccept range from user and return addition of all even
//numbers in between that range.
/////////////////////////////////////////////
//Function: RangeAddEven
//Input: 10 18
//Output: 70
//////////////////////////////////////////////

#include<stdio.h>
int RangeAddEven(int iNo1,int iNo2)
{
	int icnt=0;
	int iAns=0;
	if(iNo1<0)
	{
		printf("Invalid range\n");
		return 0;
	}
	if(iNo2<iNo1)
	{
		printf("Invalid range\n");
		return 0;
	}
	for(icnt=iNo1;icnt<=iNo2;icnt++)
	{
		if(icnt%2==0)
		{
			iAns=iAns+icnt;
		}
	}
	return iAns;
}


int main()
{
	int iVal1=0; int iVal2=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iVal1);	
	printf("Enter a no\n");
	scanf("%d",&iVal2);
	iRet=RangeAddEven(iVal1,iVal2);
	printf("The addition of even no is %d.",iRet);
	return 0;
}
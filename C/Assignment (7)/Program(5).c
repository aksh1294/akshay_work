//Accept number from user and return difference between
//summation of even digits and summation of odd digits.
/////////////////////////////////////////////
//Function: CountDiff
//Input: 2395
//Output: -15
//////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
	int digit=0;
	int iAns=0; int iAns2=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		digit=iNo%10;
		if((digit%2)==0)
		{
			iAns=iAns+digit;
		}
		else
		{
			iAns2=iAns2+digit;
		}	
		iNo=iNo/10;
	}
	return iAns-iAns2;
	
}

int main()
{
	int ival=0;
	int iRet=0;
	printf("Enter the no\n");
	scanf("%d",&ival);
	
	iRet=CountDiff(ival);
	printf("The difference is %d",iRet);
	return 0;
}
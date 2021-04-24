//Accept number from user and check whether it contains 0 in it or not.
/////////////////////////////////////////////
//Function: CountOdd
//Input: 12904
//Output: 1
//////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
	int digit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		digit=iNo%10;
		if((digit%2)!=0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iVal=0;
	int iRet=0;
	
	printf("Entetr a 4 digit no\n");
	scanf("%d",&iVal);
	
	iRet=CountOdd(iVal);
	printf("The count of odd no is %d",iRet);
	return 0;
}


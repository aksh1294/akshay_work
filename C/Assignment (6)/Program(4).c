//Accept number from user and count frequency of 4 in it.
/////////////////////////////////////////////
//Function: DisplayDigit
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
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
		if(digit==4)
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
	printf("Enter a no\n");
	scanf("%d",&iVal);
	iRet=CountFour(iVal);
	
	printf("The count of 4 is %d",iRet);
	return 0;
}
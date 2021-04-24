//Accept a no from user and display its digit in reverse.
/////////////////////////////////////////////
//Function: DisplayDigit
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
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
		if(digit<6)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int main()
{
	int ival=0;
	int iRet=0;
	printf("Enter the no");
	scanf("%d",&ival);
	
	iRet=Count(ival);
	printf("The count is %d",iRet);
	return 0;
}
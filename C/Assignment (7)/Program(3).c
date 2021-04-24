//Accept number from user and return the count of digits in between 3 and 7.
/////////////////////////////////////////////
//Function: Count
//Input: 1234
//Output: 1
//////////////////////////////////////////////

#include<stdio.h>
int Count(int iVal)
{
	int digit=0;
	int iCnt=0;
	if(iVal<0)
	{
		iVal=-iVal;
	}
	while(iVal!=0)
	{
		digit=iVal%10;
		if((digit>3)&&(digit<7))
		{
			iCnt++;
		}
		iVal=iVal/10;
	}
	return iCnt;
}


int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	
	iRet=Count(iNo);
	printf("The frquency is %d",iRet);
	return 0;
}
//Accept number from user and return the count of even digits.
/////////////////////////////////////////////
//Function: CountEven
//Input: 1234
//Output: 2
//////////////////////////////////////////////

#include<stdio.h>

int CountEven(int ival)
{
	int digit=0;
	int iCnt=0;
	if(ival<0)
	{
		ival=-ival;
	}
	while(ival!=0)
	{
		digit=ival%10;
		if(digit%2==0)
		{
			iCnt++;
		}
	
		ival=ival/10;
	}
	return iCnt;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	iRet=CountEven(iNo);
	printf("The count of even no is %d",iRet);
	return 0;
}
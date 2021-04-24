//Aaccept range from user and return addition of all numbers
//in between that range. 
/////////////////////////////////////////////
//Function: Count
//Input: 10 18
//Output: 126
//////////////////////////////////////////////

#include<stdio.h>
int DisplayRangeAddition(int iVal1,int iVal2)
{
	
	int iCnt=0;
	int iAns=0;
	if(iVal1<0)
	{
		printf("Invalid range");
		return 0;
	}
	if(iVal2<iVal1)
	{
		printf("Invalid range");
		return 0;
	}
	for(iCnt=iVal1;iCnt<=iVal2;iCnt++)
	{
		iAns=iAns+iCnt;
	}
	return iAns;
	
}


int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	printf("Enter start no\n");
	scanf("%d",&iNo1);
	printf("Enter end no\n");
	scanf("%d",&iNo2);
	
	iRet=DisplayRangeAddition(iNo1,iNo2);
	printf("The addition of number in given range is %d",iRet);
	return 0;
}
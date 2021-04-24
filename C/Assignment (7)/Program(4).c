//Aaccept number from user and return multiplication of all digits.
/////////////////////////////////////////////
//Function: MultDigits
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>
int MultDigits(int iNo)
{
	int digit=0;
	int iAns=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
	digit=iNo%10;
	if(digit==0)
	{
		digit=1;
	}
	iAns=iAns*digit;
	iNo=iNo/10;
	}
	return iAns;
}


int main()
{
	int iVal=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iVal);
	iRet=MultDigits(iVal);
	
	printf("The mutliplication of digit is %d",iRet);
	return 0;
}
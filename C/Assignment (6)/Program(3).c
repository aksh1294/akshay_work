//Accept number from user and count frequency of 2 in it.
/////////////////////////////////////////////
//Function: DisplayDigit
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>

int CountFreq(int ival)
{
	int digit=0;
	int i=0;
	if(ival<0)
	{
		ival=-ival;
	}
	while(ival!=0)
	{	
		digit=ival%10;
		if(digit==2)
		{
			i++;
		}
		ival=ival/10;
	}
	return i;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter a no\n");
	scanf("%d",&iNo);
	
	iRet=CountFreq(iNo);
	printf("The frquency is %d",iRet);
	return 0;
}
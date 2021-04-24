//Accept a no from user and display its digit in reverse.
/////////////////////////////////////////////
//Function: DisplayDigit
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int ival)
{
	int digit=0;
	if(ival<0)
	{
		ival=-ival;
	}
	while(ival!=0)
	{
	digit=ival%10;
	printf("%d\n",digit);
	ival=ival/10;
	}
}

int main()
{
	int iNo=0;
	printf("Emter a no\n");
	scanf("%d",&iNo);
	DisplayDigit(iNo);
	return 0;
}
//Accept number from user and display all the odd digits of till number
/////////////////////////////////////////////
//Function: DisplayOdd
//Input: 1234
//Output: 4321
//////////////////////////////////////////////

#include<stdio.h>
void DisplayOdd(int iNo)
{
	int icnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(icnt=1;icnt<=iNo;icnt++)
	{
		if(icnt%2!=0)
		{
			printf("%d ",icnt);
		}
	}
	
}


int main()
{
	int iVal=0;
	
	printf("Enter a no\n");
	scanf("%d",&iVal);
	DisplayOdd(iVal);
	
	return 0;
}
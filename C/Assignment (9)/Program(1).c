//Accept range from user and display all numbers in between that range.
/////////////////////////////////////////////
//Function: RangeDisplay
//Input: 5 10
//Output: 5 6 7 8 9 10
//////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int ival1, int ival2)
{
	int icnt=0;
	if(ival2<ival1)
	{
		printf("Invalid range");
		return;
	}
	for(icnt=ival1;icnt<=ival2;icnt++)
	{
		printf("%d ",icnt);
	}
	
}

int main()
{
	int iNo1=0; int iNo2=0;

	printf("Enter starting no \n");
	scanf("%d",&iNo1);
	printf("Enter a no\n");
	scanf("%d",&iNo2);
	RangeDisplay(iNo1,iNo2);
	return 0;
}
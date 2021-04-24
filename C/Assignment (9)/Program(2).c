//Accept range from user and display all even numbers in between that range.
/////////////////////////////////////////////
//Function: RangeDisplayEven
//Input: 10 20
//Output: 12 14 16 18 20
//////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
	
	int iCnt=0;
	if(iNo2<iNo1)
	{
		printf("Invalid range");
		return;
	}
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d ",iCnt);
		}
	}
	
}

int main()
{
	int iVal1=0; int iVal2=0;
	printf("Entetr start no\n");
	scanf("%d",&iVal1);
	
	printf("Entetr a end no\n");
	scanf("%d",&iVal2);
	
	RangeDisplayEven(iVal1,iVal2);
	
	return 0;
}


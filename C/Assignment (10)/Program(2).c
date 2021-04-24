//Accept range from user and display all even numbers in between that range.
/////////////////////////////////////////////
//Function: RangeDisplayEven
//Input: 10 20
//Output: 12 14 16 18 20
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo1)
{
	
	int iCnt=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	for(iCnt=iNo1;iCnt>0;iCnt--)
	{
		printf("%d # ",iCnt);
	}
	
}

int main()
{
	int iVal1=0; 
	printf("Entetr start no\n");
	scanf("%d",&iVal1);
	
	Pattern(iVal1);
	
	return 0;
}


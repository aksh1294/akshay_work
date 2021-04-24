//Accept range from user and display all numbers in between that range.
/////////////////////////////////////////////
//Function: RangeDisplay
//Input: 5
//Output: A B C D E 
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int ival1)
{
	int iCnt=0;
	char cVal='A';
	
	for(iCnt=1;iCnt<=ival1;iCnt++)
	{
		printf("%c\t",cVal);
		cVal++;
	}
	
}

int main()
{
	int iNo1=0; 

	printf("Enter starting no \n");
	scanf("%d",&iNo1);

	Pattern(iNo1);
	return 0;
}
//Accept accept range from user and display all numbers in
//between that range in reverse order
/////////////////////////////////////////////
//Function: RangeRev
//Input: 23 35
//Output: 35 34 33 32 31 30 29 28 27 26 25 24 23
//////////////////////////////////////////////

#include<stdio.h>

void RangeRev(int iNo1, int iNo2)
{
	int icnt=0;
	
	if(iNo2<iNo1)
	{
		("Invalid range");
		return;
	}
	for(icnt=iNo2;icnt>=iNo1;icnt--)
	{
		printf("%d ",icnt);
	}
	
	
}

int main()
{
	int ival1=0; int ival2=0;

	printf("Enter the no\n");
	scanf("%d",&ival1);
	printf("Enter the second no\n");
	scanf("%d",&ival2);	
	RangeRev(ival1,ival2);
	
	return 0;
}
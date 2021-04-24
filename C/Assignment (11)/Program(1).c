//Aaccept tow no from user and display below pattern
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 3
Output : * * *
* * *
* * *
* * * */
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int irow, int icol)
{
	int i=0; int j=0;
 	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}


int main()
{
	int iNo1=0;
	int iNo2=0;
	printf("Enter no of rows\n");
	scanf("%d",&iNo1);
	printf("Enter no of columns\n");
	scanf("%d",&iNo2);
	Pattern(iNo1,iNo2);
	return 0;
}
//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 4
Output : * # # #
* * # #
* * * #
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0; int icnt=0;
	for(i=1;i<=iRow;i++)
	{
		
		for(j=1;j<=iCol;j++)
		{	
			if(i<j)
			{
			printf(" ");
			}
			else
			{
			printf("*");
			}
		}
		printf("\n");
	}
}


int main()
{
	int ino1=0; int ino2=0;
	printf("Enter the number of row and cols\n");
	scanf("%d %d",&ino1,&ino2);
	Pattern(ino1,ino2);
	
	return 0;
}
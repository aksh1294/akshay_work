//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 5
Output : 4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0; int icnt=0;
	for(i=1;i<=iRow;i++)
	{
		icnt=1;
		for(j=1;j<=iCol;j++)
		{	
			if(i==1 || i==iRow || j==1 || j==iRow)
			{
				printf("*");
			}
			else if(i==j)
			{
				printf("*");
			}
			else
			{
			printf(" ");
			}
			icnt++;
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
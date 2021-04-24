//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 4
Output : 
1 2 3 4 5
1 2		5
1 	3 	5
1 	  4 5
1 2 3 4 5
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		
		for(j=1;j<=iCol;j++)
		{	
			if(j==i||i==1||i==iRow||j==1||j==iRow)
			{
			printf("%d",j);
			}
			else
			{
			printf(" ");
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
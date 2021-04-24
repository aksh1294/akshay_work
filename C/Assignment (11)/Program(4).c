//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 3 iCol = 4
Output : * # * #
* # * #
* # * #
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol/2;j++)
		{
		printf("*\t#\t");
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
//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 3
Output : 1 2 3
1 2 3
1 2 3
1 2 3
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	char cVal1='\0'; char cVal2='\0';
	for(cVal1='A',i=1;i<=iRow;i++)
	{
		
		for(cVal2='a',j=1;j<=iCol;j++)
		{	
			printf("%c",cVal1);
						
		}
		cVal1++;
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
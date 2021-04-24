//Accept two no from user and display below pattern.
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 3
Output : Not achieved
*/
//////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	char cVal1='\0'; 
	for(i=1;i<=iRow;i++)
	{
		cVal1='A';
		char cVal2='a';
		for(j=1;j<=iCol;j++)
		{	
			if(i%2==0)
			{
				printf("%c\t",cVal2);
			}
			else
			{
			printf("%c\t",cVal1);
			}
			cVal1++; cVal2++;			
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
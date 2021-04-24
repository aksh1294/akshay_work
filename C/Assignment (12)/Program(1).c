//Aaccept tow no from user and display below pattern
/////////////////////////////////////////////
/*Input : iRow = 4 iCol = 4
Output : A B C D
A B C D
A B C D
A B C D
*/
/////////////////////////////////////////////

#include<stdio.h>

void Pattern(int irow, int icol)
{
	int i=0; int j=0;
	char cVal='\0';
 	for(i=1;i<=irow;i++)
	{
		cVal='A';
		for(j=1;j<=icol;j++)
		{
			printf("%c\t",cVal);
			cVal++;
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
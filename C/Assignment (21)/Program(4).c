
/*Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekSmall(char ch)
{
	if(ch>='a' && ch<='z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cVal='\0';
	BOOL bret=FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cVal);
	
	bret=ChekSmall(cVal);
	
	if(bret==TRUE)
	{
		printf("The charchter is small case");
	}
	else
	{
		printf("It is not a small case");
	}
	
	return 0;
}


/*Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekSpecial(char ch)
{
	if((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z') || (ch>='0') && (ch<='9'))
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char cVal='\0';
	BOOL bret=FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cVal);
	
	bret=ChekSpecial(cVal);
	
	if(bret==TRUE)
	{
		printf("The charchter is special character\n");
	}
	else
	{
		printf("It is not a special case");
	}
	
	return 0;
}


/*
Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAplha(char ch)
{
	if(ch>='0' && ch<='9')
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
	printf("enter any character\n");
	scanf("%c",&cVal);
	
	bret=CheckAplha(cVal);
	
	if(bret==TRUE)
	{
		printf("Charact is digit \n");
	}
	else
	{
		printf("It is not digit");
	}
	return 0;
}


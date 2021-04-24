
/*
1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAplha(char ch)
{
	if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z')
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
		printf("It is character\n");
	}
	else
	{
		printf("It is not the character");
	}
	return 0;
}


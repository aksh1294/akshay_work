
/*Write a program whi*str accept string from user and *streck whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
//////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char str[])
{
	int icnt=0;
	while(str[icnt]!='\0')
	{
		if(str[icnt]=='a'||str[icnt]=='A'||str[icnt]=='e'||str[icnt]=='E'||str[icnt]=='i'||str[icnt]=='I'||str[icnt]=='o'||str[icnt]=='O'||str[icnt]=='u'||str[icnt]=='U')
		{
			break;
		}
		icnt++;
	}
	if(str[icnt]=='\0')
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
	char arr[20];
	BOOL bret=FALSE;
	
	printf("String\n");
	scanf("%[^'\n']s",arr);
	
	bret=CheckVowel(arr);
	
	if(bret==TRUE)
	{
		printf("Yes , vowel");
	}
	else
	{
		printf("No, vowel");
	}
	return 0;
}
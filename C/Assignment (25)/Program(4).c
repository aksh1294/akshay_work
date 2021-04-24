
/*Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
*/
//////////////////////////////////////////////

#include<stdio.h>

int chkindex(char *str, char cval)
{
	int icnt=0;
	int ians=0;
	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	printf("%d",icnt);
	str--;
	icnt--;
	printf("%c",*str);
	while(icnt>=0)
	{
		if(*str==cval)
		{
			ians=icnt;
			break;
		}
		icnt--;
		str--;
	}
	if(icnt==-1)
	{
		return -1;
	}
	else
	{
		return ians;
	}
}

int main()
{
	char arr[40];
	char ch='\0';
	int iret=0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character\n");
	scanf(" %c",&ch);
	
	iret=chkindex(arr,ch);
	
	printf("The last occurrence is at %d",iret);
	
	return 0;
}


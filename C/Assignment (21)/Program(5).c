
/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
*/
//////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char cval)
{
	if((cval=='A')||(cval=='a'))
	{
		printf("The exam is at 7 Am\n");
	}
	else if((cval=='B')||(cval=='b'))
	{
		printf("The exam is at 8.30 Am\n");
	}
	else if((cval=='C')||(cval=='c'))
	{
		printf("The exam is at 9.20 Am\n");
	}
	else if((cval=='D')||(cval=='d'))
	{
		printf("The exam is at 10.30 Am\n");
	}
	else
	{
		printf("No such division found");
	}
}

int main()
{
	char ch='\0';
	
	printf("Enter the Division\n");
	scanf("%c",&ch);
	
	DisplaySchedule(ch);
	
	return 0;
}
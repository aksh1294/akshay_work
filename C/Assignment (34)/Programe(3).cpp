/*Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :
int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE Head, int ino)
{
	PNODE newn=NULL;
	PNODE temp=*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=ino;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->\t",Head->data);
		Head=Head->next;
	}
	printf("Null\n");	
}

int AdditionEven(PNODE Head)
{
	int iAns=0;
	while(Head!=NULL)
	{
		if(((Head->data)%2)==0)
		{
		iAns=iAns+(Head->data);
		}
		Head=Head->next;
	}
	return iAns;
}

int main()
{
	PNODE First=NULL;
	int iret=0;
	InsertLast(&First,11);
	InsertLast(&First,20);
	InsertLast(&First,32);
	InsertLast(&First,41);
	InsertLast(&First,55);
	Display(First);
	
	iret=AdditionEven(First);
	printf("%d",iret);
	return 0;
}
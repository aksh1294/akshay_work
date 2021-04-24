/*Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
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

int Addition(PNODE Head)
{
	int iAns=0;
	while(Head!=NULL)
	{
		iAns=iAns+(Head->data);
		Head=Head->next;
	}
	return iAns;
}

int main()
{
	PNODE First=NULL;
	int iret=0;
	InsertLast(&First,10);
	InsertLast(&First,20);
	InsertLast(&First,30);
	InsertLast(&First,40);
	InsertLast(&First,50);
	Display(First);
	
	iret=Addition(First);
	printf("%d",iret);
	return 0;
}
/*Write a program which return smallest element from singly linear linked
list.
Function Prototype :
int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20*/

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

int Minimum(PNODE Head)
{
	int iMax=Head->data;
	while(Head!=NULL)
	{
		if((Head->data)<iMax)
		{
			iMax=Head->data;
		}
		Head=Head->next;
	}
	return iMax;
}

int main()
{
	PNODE First=NULL;
	int iret=0;
	InsertLast(&First,50);
	InsertLast(&First,20);
	InsertLast(&First,10);
	InsertLast(&First,40);
	InsertLast(&First,30);
	Display(First);
	
	iret=Minimum(First);
	printf("%d",iret);
	return 0;
}
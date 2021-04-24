/*Write a program which display smallest digits of all element from singly
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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

void DisplaySmall( PNODE Head)
{
	int iMin=9;
	int idigit=0;
	while(Head!=NULL)
	{
		int iMin=9;
		while((Head->data)>0)
		{
			idigit=(Head->data)%10;
			if(idigit<iMin)
			{
				iMin=idigit;
			}
			Head->data=(Head->data)/10;
		}
		printf("%d\t",iMin);
		Head=Head->next;
	}
	
}

int main()
{
	PNODE First=NULL;	
	int iret=0;
	InsertLast(&First,120);
	InsertLast(&First,20);
	InsertLast(&First,532);
	InsertLast(&First,40);
	InsertLast(&First,30);
	Display(First);
	
	DisplaySmall(First);
	return 0;
}
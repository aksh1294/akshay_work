/*Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9
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

void DisplayLarge( PNODE Head)
{
	int iMax=0;
	int idigit=0;
	
	while(Head!=NULL)
	{
		while((Head->data)!=0)
		{
			idigit=(Head->data)%10;
			if(idigit>iMax)
			{
				iMax=idigit;
			}
			Head->data=(Head->data)/10;
		}
		printf("%d\t",iMax);
		iMax=0;
		Head=Head->next;
	}
	
}

int main()
{
	PNODE First=NULL;	
	int iret=0;
	InsertLast(&First,120);
	InsertLast(&First,20);
	InsertLast(&First,50);
	InsertLast(&First,40);
	InsertLast(&First,30);
	Display(First);
	
	DisplayLarge(First);
	return 0;
}
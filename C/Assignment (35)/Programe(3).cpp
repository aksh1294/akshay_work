/*Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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

void DisplayProduct( PNODE Head)
{
	int iAns=1;
	int idigit=0;
	while(Head!=NULL)
	{
		while((Head->data)!=0)
		{
			idigit=(Head->data)%10;
			if(idigit!=0)
			{
			iAns=iAns*idigit;
			}
			Head->data=(Head->data)/10;
		}
		printf("%d\t",iAns);
		iAns=1;
		Head=Head->next;
	}
}

int main()
{
	PNODE First=NULL;
	
	InsertLast(&First,11);
	InsertLast(&First,20);
	InsertLast(&First,32);
	InsertLast(&First,41);
	InsertLast(&First,55);
	Display(First);
	
	DisplayProduct(First);
	return 0;
}
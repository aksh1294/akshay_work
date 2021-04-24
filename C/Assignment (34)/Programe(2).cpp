/*Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :
int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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

void  Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

void DisplayPrime(PNODE Head)
{
	int i=0;
	while(Head!=NULL)
	{
		for(i=2;i<((Head->data)/2);i++)
		{
			if((Head->data)%i==0)
			{
				break;
			}
		}
		if(i==((Head->data)/2))
		{
			printf("%d\t",(Head->data));
		}
		Head=Head->next;
	}
}
int main()
{
	PNODE First=NULL;

	InsertLast(&First,11);
	InsertLast(&First,20);
	InsertLast(&First,17);
	InsertLast(&First,41);
	InsertLast(&First,22);
	InsertLast(&First,60);
	Display(First);
	//icnt=Count(First);
	
	DisplayPrime(First);
	return 0;
}
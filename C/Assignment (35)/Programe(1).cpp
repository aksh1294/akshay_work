/*Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
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

void Reverse( PNODE Head)
{
	int idigit=0;
	int irev=0;
	while(Head!=NULL)
	{
		while((Head->data)!=0)
		{
			idigit=(Head->data)%10;
			irev=(irev*10)+idigit;
			Head->data=(Head->data)/10;
		}
		//printf("%d\t",irev);
		//printf("\n");
		Head->data=irev;
		irev=0;
		Head=Head->next;
	}

}

int main()
{
	PNODE First=NULL;
	int iret=0;
	InsertLast(&First,11);
	InsertLast(&First,28);
	InsertLast(&First,17);
	InsertLast(&First,41);
	InsertLast(&First,4);
	Display(First);
	
	Reverse(First);
	Display(First);
	
	return 0;
}
/*
Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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

void DisplayPallindrome( PNODE Head)
{
	int idigit=0;
	int irev=0;
	while(Head!=NULL)
	{
		int itemp=Head->data;
		while((Head->data)!=0)
		{
			idigit=(Head->data)%10;
			irev=(irev*10)+idigit;
			Head->data=(Head->data)/10;
		}
		//printf("%d\t",irev);
		//printf("\n");
		if(itemp==irev)
		{
			printf("%d\t",itemp);
		}
		irev=0;
		Head=Head->next;
	}

}

int main()
{
	PNODE First=NULL;

	InsertLast(&First,11);
	InsertLast(&First,20);
	InsertLast(&First,17);
	InsertLast(&First,414);
	InsertLast(&First,22);
	InsertLast(&First,60);
	Display(First);
	//icnt=Count(First);
	
	DisplayPallindrome(First);
	return 0;
}
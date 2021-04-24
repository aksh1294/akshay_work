/*Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10
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

void SumDigit(PNODE Head)
{
	int idigit=0;
	int iSum=0;
	while(Head!=NULL)
	{
		while((Head->data)!=0)
		{
			idigit=(Head->data)%10;
			iSum=iSum+idigit;
			Head->data=(Head->data)/10;
		}
		printf("%d\t",iSum);
		iSum=0;
		Head=Head->next;
	}

}

int main()
{
	PNODE First=NULL;	
	int iret=0;
	InsertLast(&First,110);
	InsertLast(&First,230);
	InsertLast(&First,50);
	InsertLast(&First,240);
	InsertLast(&First,30);
	Display(First);
	
	SumDigit(First);
	
	return 0;
}
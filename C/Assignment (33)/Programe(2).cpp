/*Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :
int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6
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
int SearchLastOcc(PNODE Head, int ifind)
{
	PNODE temp=Head;
	int icnt=0;
	int i=0;
	while(Head!=NULL)
	{
		icnt++;
		Head=Head->next;
	}
	Head=temp;
	
	for(i=icnt; i>0; i--)
	{
		if(Head->data==ifind)
		{
			break;
		}
		Head=Head->next;
	}
	return i;
}
int main()
{
	PNODE First=NULL;
	int icnt=0;
	int iSearch=0;
	printf("Enter the elent to searcj\n");
	scanf("%d\n",&iSearch);
	
	InsertLast(&First,10);
	InsertLast(&First,20);
	InsertLast(&First,30);
	InsertLast(&First,40);
	InsertLast(&First,50);
	InsertLast(&First,60);
	Display(First);
	//icnt=Count(First);
	
	icnt=SearchLastOcc(First,iSearch);
	printf("%d",icnt);
	return 0;
}
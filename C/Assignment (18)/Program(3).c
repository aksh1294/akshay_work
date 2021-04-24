
/*
3. Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Check(int Arr[], int isize)
{
	int i=0; 
	for(i=0;i<isize;i++)
	{
		if(Arr[i]==11)
		{
			break;
		}
		
	}
	if(i==isize)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int *arr=NULL;
	int ilenght=0;
	int i=0;
	BOOL iRet=FALSE;
	
	printf("Ente the number of the elements\n");
	scanf("%d",&ilenght);
	
	arr=(int*)malloc(ilenght*sizeof(int));
	if(arr==NULL)
	{
		printf("the memory is not allocated");
		return -1;
	}
	printf("Enter the element\n");
	for(i=0;i<ilenght;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=Check(arr,ilenght);
	
	if(iRet==TRUE)
	{
		printf("YEs");
	}
	else
	{
		printf("NO");
	}

	free(arr);
	
	return 0;
}
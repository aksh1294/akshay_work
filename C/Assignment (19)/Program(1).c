
/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE

*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int Arr[], int isize, int ival)
{
	int i=0;
	if(Arr==NULL)
	{
		return -1;
	}
	for(i=0;i<isize;i++)
	{
		if(Arr[i]==ival)
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
	int *arr=0;
	int ilength=0;
	int iNo=0, i=0;
	BOOL bret=FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&ilength);
	
	arr=(int*)malloc(ilength*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory not allocated");
		return -1;
	}
	printf("Enter the elements\n");
	for(i=0;i<ilength;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to check presense\n");
	scanf("%d",&iNo);
	
	bret=CheckNumber(arr,ilength,iNo);
	if(bret==TRUE)
	{
		printf("The number is present\n");
	}
	else
	{
		printf("The number is not present\n");
	}
	
	free(arr);
	
	return 0;
}
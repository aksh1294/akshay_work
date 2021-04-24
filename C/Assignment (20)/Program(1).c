
/*
1. Accept N numbers from user and return the largest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DisplayMax(int Arr[],int isize)
{
	int i=0;
	int imax=Arr[0];
	for(i=0;i<isize;i++)
	{
		if(Arr[i]>imax)
		{
			imax=Arr[i];
		}
	}
	return imax;
}

int main()
{
	int *arr=NULL;
	int ilen=0;
	int iret=0;
	int i=0;
	
	printf("Enter the number\n");
	scanf("%d",&ilen);
	
	arr=(int*)malloc(ilen*sizeof(int));
	if(arr==NULL)
	{
		printf("No memory allocated\n");
		return -1;
	}
	printf("Enter the element\n");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iret=DisplayMax(arr,ilen);
	printf("The max number is %d",iret);
	free(arr);
	
	return 0;
}


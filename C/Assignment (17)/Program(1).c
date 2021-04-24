//Accept N numbers from user and return difference between summation
//of even elements and summation of odd elements.
/////////////////////////////////////////////
/*
Function: Differnce(int ,int ) 
Input: 1. 6
	   2.  88 66 3 80 93 88
Output: 53 (234-181)

*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h> // malloc function library.

int Differnce(int Arr[], int iSize)
{
	int i=0;
	int isum1=0,  isum2=0;
	if(arr==NULL||iSize==0)
	{
		return 0;
	}
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			isum1=isum1+Arr[i];
		}
		else
		{
			isum2=isum2+Arr[i];
		}
	}
	return isum1-isum2;
}


int main()
{
	int *arr=NULL;
	int ilenght=0, i=0;
	int iRet=0;
	
	printf("Ente the number of the element\n");
	scanf("%d",&ilenght);
	
	arr=(int*)malloc(ilenght*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory not allocated");
		return -1;
	}
	printf("Enter the elements\n");
	
	for(i=0; i<ilenght;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=Differnce(arr,ilenght);
	printf("The difference is %d\n",iRet);
	free(arr);
	
	return 0;
}
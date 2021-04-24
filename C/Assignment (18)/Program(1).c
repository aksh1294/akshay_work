
/*
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3

*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int isize)
{
	int i=0; int icnt=0;
	for(i=0;i<isize;i++)
	{
		if((Arr[i]%2)==0)
		{
			icnt++;
		}		
	}
	return icnt;
}

int main()
{
	int *arr=NULL;
	int ilenght=0;
	int i=0, iRet=0;
	
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
	
	iRet=CountEven(arr,ilenght);
	printf("The frequency of the even no is %d",iRet);
	
	free(arr);
	
	return 0;
}
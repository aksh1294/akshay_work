/*
Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int isize)
{
	int i=0;
	for(i=0;i<isize;i++)
	{
		if(Arr[i]%5==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr=NULL; 
	int iLenght=0, i=0;
	
	printf("Enter a number of elements\n");
	scanf("%d",&iLenght);
	
	arr=(int*)malloc(iLenght*sizeof(int));
	
	if(arr==NULL)
	{
		printf("No memory allocated");
		return -1;
	}
	printf("Enter the element\n");
	
	for(i=0;i<iLenght;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Display(arr,iLenght);
	
	free(arr);
	
	return 0;
	
}
/*
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int isize)
{
	int i=0; int icnt1=0;
	int icnt2=0;
	for(i=0;i<isize;i++)
	{
		if(Arr[i]%2==0)
		{
			icnt1++;
		}
		else
		{
			icnt2++;
		}
	}
	return icnt1-icnt2;
}
int main()
{
	int *arr=NULL; 
	int iLenght=0, i=0;
	int iRet=0;
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
	
	iRet=FrequencyDiff(arr,iLenght);
	printf("The differnce in frequncy is %d\n ",iRet);
	free(arr);
	
	return 0;
	
}
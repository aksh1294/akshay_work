/*
Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CheckIndex(int Arr[],int isize, int ival)
{
	int i=0;
	for(i=0;i<isize;i++)
	{
		if(Arr[i]==ival)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int *arr=NULL;
	int ilen=0;
	int iNo=0, i=0;
	int iret=0;
	printf("Enter a number\n");
	scanf("%d",&ilen);
	
	arr=(int*)malloc(ilen*sizeof(int));
	
	if(arr==NULL)
	{
		printf("The memory is not allocated\n");
		return  -1;
	}
	printf("Enter the elements\n");
	
	for(i=0;i<ilen;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to check its index\n");
	scanf("%d",&iNo);
	
	iret=CheckIndex(arr,ilen,iNo);
	
	if(iret==ilen)
	{
		printf("The nuber is not present in elements\n");
	}
	else
	{
		printf("The index of the given number %d is %d\n",iNo,iret);
	}
	free(arr);
	return 0;
}


/*
3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CheckLastOcur(int Arr[],int isize, int ival)
{
	int i=0;
	for(i=isize-1;i>=0;i--)
	{
		if(Arr[i]==ival)
		{
			break;
		}
	}
	if(i==-1)
	{
		return -2;
	}
	else
	{
	return i;
	}
}
int main()
{
	int *arr=NULL;
	int ilen=0;
	int iNo=0, i=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&ilen);
	
	arr=(int*)malloc(ilen*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Memory not allocated\n");
		return -1;
	}
	printf("Enter the elements\n");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to check the last index\n");
	scanf("%d",&iNo);
	
	iRet=CheckLastOcur(arr,ilen,iNo);
	if(iRet==-2)
	{
		printf("The number is not present in element\n");
	}
	else
	{
		printf("The number %d last index is %d",iNo,iRet);
	}
	
	free(arr);
	
	return 0;
}
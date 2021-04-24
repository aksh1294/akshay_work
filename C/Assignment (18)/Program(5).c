
/*5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
output: 2
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLen, int iVal)
{
	int i=0;
	int icnt=0;
	for(i=0;i<iLen;i++)
	{
		if(Arr[i]==iVal)
		{
			icnt++;
		}
	}
	return icnt;
}

int main()
{
	int *arr=0;
	int ilenght=0;
	int iNo=0;
	int i=0, iret=0;
	
	
	printf("Ente the number of element\n");
	scanf("%d",&ilenght);
	
	
	arr=(int*)malloc(ilenght*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory not found");
		return -1;
	}
	printf("Enter the elements\n");
	for(i=0;i<ilenght;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number of to find its frequncy\n");
	scanf("%d",&iNo);
	
	iret=Frequency(arr,ilenght,iNo);
	
	printf("The frequncy of the given no in the elemnt is %d",iret);
	
	free(arr);
	
	return 0;
}
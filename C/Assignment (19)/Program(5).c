
/*Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLen)
{
	int i=0;
	int iAns=1;
	for(i=0;i<iLen;i++)
	{
		if(Arr[i]%2!=0)
		{
			iAns=iAns*Arr[i];
		}
	}
	return iAns;
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
	
	iret=Frequency(arr,ilenght);
	
	printf("The product of the odd no in the elemnt is %d",iret);
	
	free(arr);
	
	return 0;
}
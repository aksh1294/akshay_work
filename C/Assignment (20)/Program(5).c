
/*
5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Frequency(int Arr[], int iLen)
{
	int i=0;
	int idigit=0; int iAns=0;
	for(i=0;i<iLen;i++)
	{
		iAns=0;
		while(Arr[i]!=0)
		{
		idigit=Arr[i]%10;
		iAns=iAns+idigit;
		Arr[i]=Arr[i]/10;
		}
		printf("%d\t",iAns);	
	}
	
}

int main()
{
	int *arr=0;
	int ilenght=0;
	int i=0;
	
	
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
	
	Frequency(arr,ilenght);
	
	
	free(arr);
	
	return 0;
}
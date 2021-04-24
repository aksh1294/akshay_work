
/*5. Accept N numbers from user and display all such elements which are
multiples of 11.
Input : N : 6
Elements : 85 66 3 55 93 88
Output : 66 55 88
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int isize)
{
	int i=0;
	for(i=0;i<isize;i++)
	{
		if((Arr[i]%11)==0)
		{
			printf("%d\t",Arr[i]);
		}		
	}
}

int main()
{
	int *arr=NULL;
	int ilenght=0;
	int i=0;
	
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
	
	display(arr,ilenght);
	
	free(arr);
	
	return 0;
}
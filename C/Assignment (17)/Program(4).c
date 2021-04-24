
/*4. Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 15
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int isize)
{
	int i=0;
	for(i=0;i<isize;i++)
	{
		if((Arr[i]%3==0)&&(Arr[i]%5==0))
		{
			printf("%d\n",Arr[i]);
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
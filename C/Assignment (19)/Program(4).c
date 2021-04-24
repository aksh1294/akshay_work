
/*Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int isize,int ival1,int ival2)
{
	int i=0;
	if(Arr==NULL)
	{
		return;
	}
	if(ival2<ival1)
	{
		return;
	}
	for(i=0;i<isize;i++)
	{
		if((Arr[i]>ival1)&&(Arr[i]<ival2))
		{
			printf("%d\t",Arr[i]);
		}
	}
}
int main()
{
	int *arr=NULL;
	int ilength=0;
	int i=0; int iNo1=0, iNo2=0;
	
	printf("Enter number of the elements\n");
	scanf("%d",&ilength);
	
	arr=(int*)malloc(ilength*sizeof(int));
	if(arr==NULL)
	{
		printf("Memomry not allocated");
		return -1;
	}
	printf("Enter the elemets\n");
	for(i=0;i<ilength;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the start no\n");
	scanf("%d",&iNo1);
	printf("Enter the Last no\n");
	scanf("%d",&iNo2);
	
	Display(arr,ilength,iNo1,iNo2);
	
	free(arr);
	
	return 0;
}
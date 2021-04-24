
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

void Display(int Arr[],int isize)
{
	int i=0;
	int icnt=0; int idigit=0; int iNo=0;
	for(i=0;i<isize;i++)
	{
		icnt=0;
		iNo=Arr[i];
		while(iNo!=0)
		{
			idigit=iNo%10;
			if(idigit!=0)
			{
				icnt++;
			}
			iNo=iNo/10;
		}
		if(icnt==3)
		{
			printf("\n The 3 digit is %d\n",Arr[i]);
		}
		
	}
}
int main()
{
	int *arr=NULL;
	int ilength=0;
	int i=0; 
	
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
	
	
	Display(arr,ilength);
	
	free(arr);
	
	return 0;
}
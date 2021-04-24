
/*Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 11 3 15 93 88
Output : 1
*/
//////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int isize)
{
	int i=0; int icnt=0;
	for(i=0;i<isize;i++)
	{
		if(Arr[i]==11)
		{
			icnt++;
		}
		
	}
	return icnt;
}
int main()
{
	int *arr=NULL;
	int ilength=0;
	int i=0; int iRet=0;
	
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
	
	iRet=Display(arr,ilength);
	printf("The frequency of the number 11 is %d",iRet);
	free(arr);
	
	return 0;
}
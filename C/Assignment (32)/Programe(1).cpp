/*Write application which accept two file names from user. Compare the contents of
that two files. If contents are same then return true otherwise return false.*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>
#include<stdbool.h>
using namespace std;

class FileX
{
public:
    int fd1;
    int fd2;
    FileX(char Name1[], char Name2[])
    {
        fd1 = open(Name1,O_RDONLY);
		fd2 = open(Name2,O_RDONLY);
        if(fd1 == -1|| fd2 == -1)
        {   cout<<"Unable to open file\n";}
		else
		{
			cout<<"File opened Successfull";
		}
    }
	bool CheckData()
	{
		char arr1[10];
		char brr[10];
		int iret1=0;
		int iret2=0;
		int ians1=0, ians2=0;
		while((iret1=read(fd1,arr1,10)!=0)) 
		{
			ians1=ians1+iret1;
		}
		while((iret2=read(fd2,brr,10)!=0))
		{
			ians2=ians2+iret2;
		}
		//cout<<ians1-ians2;
		if(ians1-ians2==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
    ~FileX()
    {
        close(fd1);
		close(fd2);
    }
};
int main()
{
    char str[30];
	char arr[30];
    cout<<"Enter file name\n";
    cin>>str;
	cout<<"Enter file name\n";
    cin>>arr;
    FileX obj(str,arr);
	bool bret=false;
	bret=obj.CheckData();
	if(bret==true)
	{
		cout<<"true";
	}
	else
	{
		cout<<"flase";
	}
    return 0;
}

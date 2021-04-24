/*Write application which accept file name from user and display size of file.*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>
using namespace std;

class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to open file\n";}
		else
		{
			cout<<"Successfull\n";
		}
    }
	int ReadData()
	{
		char Arr[10];
		int iret=0;
		int iSum=0;
		while((iret=read(fd,Arr,10))!=0)
		{
			iSum=iSum+iret;
		}
		return iSum;
	}
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
	
    char str[30];
	int isize=0;
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
	isize=obj.ReadData();
	cout<<"The size of file is: "<<isize;
    return 0;
}

/*Write application which accept two file names from user. Append the contents of
first file at the end of second file.*/

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
    int fd1;
	int fd2;
    
    FileX(char Name1[], char Name2[])
    {
        fd1 = open(Name1,O_RDONLY);
		fd2 = open(Name2,O_WRONLY | O_APPEND);
        if(fd1 == -1 || fd2 == -1)
        {   
			cout<<"Unable to open file\n";
		}
    }
	void ReadData()
	{
		char Arr[10];
		//char ch='\0';
		int ret=0;
		
		while((ret=read(fd1,arr,10))!=0)
		{
			write(fd2,arr,ret);
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
	char ptr[30];
    cout<<"Enter file name\n";
    cin>>str;
	cout<<"Enter file name\n";
    cin>>ptr;
    FileX obj(str,ptr);
	obj.ReadData();
    return 0;
}

/*Accept three file names from user which are existing files. Create one new file
named as Demo.txt. Write name and Data of that three files in Demo.txt file one
after another.*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>
#include<cstring>
using namespace std;

class FileX
{
public:
    int fd1;
	int fd2;
	int fd3;
	int fd4;
    
    FileX(char Name1[], char Name2[],char Name3[], char Name4[])
    {
        fd1 = open(Name1,O_RDONLY);
		fd2 = open(Name2,O_RDONLY);
		fd3 = open(Name3,O_RDONLY);
		fd4 = creat(Name4,0777);
		fd4=open(Name4,O_WRONLY | O_APPEND);
        if(fd1 == -1 || fd2==-1||fd3==-1||fd4== -1)
        {   
			cout<<"Unable to open file\n";
		}
		
    }
	void AppendData()
	{
		char arr[30];
		int ret=0;
		
		while((ret=read(fd1,arr,10))!=0)
		{
			write(fd4,arr,ret);
		}
		while((ret=read(fd2,arr,10))!=0)
		{
			write(fd4,arr,ret);
		}
		while((ret=read(fd3,arr,10))!=0)
		{
			write(fd4,arr,ret);
		}
		
	}
    ~FileX()
    {
        close(fd1);
    }
};
int main()
{
    char str1[30];
	char str2[30];
	char str3[30];
	char str4[30];
    cout<<"Enter file name\n";
    cin>>str1;
	cout<<"Enter file name\n";
	cin>>str2;
	cout<<"Enter file name\n";
    cin>>str3;
	cout<<"Enter file name\n";
    cin>>str4;
    FileX obj(str1,str2,str3,str4);
	
	obj.AppendData();
    return 0;
}

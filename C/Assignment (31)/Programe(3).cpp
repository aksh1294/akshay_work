/*Write application which accept file name from user and read all data from that file
and display contents on screen.*/

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
        {   
			cout<<"Unable to open file\n";
		}
    }
	void ReadData()
	{
		char Arr[10];
		int ret=0;
		
		while((ret=read(fd,Arr,10))!=0)
		{
			write(1,Arr,ret);
		}
		
	}
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
	obj.ReadData();
    return 0;
}

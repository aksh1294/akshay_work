/*Write application which accept file name from user and create that file.*/

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
        fd = creat(Name,0777);
        if(fd == -1)
        {   
			cout<<"Unable to open file\n";
		}
		else
		{
			cout<<"File create Successfull";
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
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//#include<io.h>
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
			cout<<"Successfull";
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

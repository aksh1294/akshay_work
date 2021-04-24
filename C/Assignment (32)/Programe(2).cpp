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
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   
			cout<<"Unable to open file\n";
		}
		
    }
	int CountChar()
	{
		char ch;
		char arr[10];
		int iret=0;
		int icnt=0;
		/*while((iret=read(fd,&ch,1))!=0)
		{
			if(ch=='M')
			{
				icnt++;
			}
		}*/
		while((iret=read(fd,arr,10)!=0))
		{
			if(*arr=='M')
			{
				icnt++;
			}
		}
		return icnt++;
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
	int iret=0;
	iret=obj.CountChar();
	cout<<iret;
    return 0;
}

/*Write application which accept file name and one word from user. Count the
frequency of that word in file.*/

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
	int ReadData(char arr[])
	{
		char chr[10];
		int ired=0;
		int icnt=0;
		while((ired=read(fd,chr,10))!=0)
		{
			while(*chr!=' ' || *chr!='\0' )
			{
				if(*chr==*arr)
				{
					icnt++;
				}
			}
		}
		return icnt;
	}
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
	
    char str[30];
	char ptr[30];
	int isize=0;
    cout<<"Enter file name\n";
    cin>>str;
	cout<<"Enter word\n";
    cin>>ptr;
    FileX obj(str);
	isize=obj.ReadData(ptr);
	cout<<"The count of word of file is: "<<isize;
    return 0;
}

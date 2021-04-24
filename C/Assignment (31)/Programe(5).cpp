/*Write application which accept file name from user and one string from user. Write
that string at the end of file.*/

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
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY | O_APPEND);
        if(fd == -1)
        {   
			cout<<"Unable to open file\n";
		}
		
    }
	void AppendData()
	{
		/*int icnt=0;
		char *i=arr;
		while(*i!='\0')
		{
			icnt++;
			i++;
		}
		cout<<icnt*/
		char arr[10];
		cout<<"Enter the text to append in file data\n";
		scanf("%[^'\n']s",arr);
		char *ptr=arr;
		int ilen=strlen(ptr);
		cout<<ilen;
		write(fd,ptr,ilen+1);
	}
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
    char str[30];
	char ptr[20];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
	cout<<"Enter the text to append in file data\n";
	scanf("%[ ^'\n']s",ptr);
	obj.AppendData();
    return 0;
}

#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
	ifstream index("index.txt");
	ofstream md("markdown.md");
	char buf[255];
	while(index.getline(buf,254,'\n'))
	{
		md<<"["; 
		for(int i=0,len=strlen(buf);buf[i]!='.';i++)
		{
			md<<buf[i];
		}
		md<<"](/cdn/exe/"<<buf<<")\n\n";
		
	}
	return 0;
}

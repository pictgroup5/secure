#include<iostream>
#include<fstream>
#include"localwrite.h"
#include<stdlib.h>
using namespace std;

void LocalWrite::fileopen(char fname[])
{
	long int fsize;
	f.open(fname,ios::out|ios::binary);
	if(!f)
	cout<<"Could not open file";
}


void LocalWrite::filewrite(char fname[],int csize)
{
	f.write(fname,csize);
}


void LocalWrite::fileclose()
{
	f.close();
} 

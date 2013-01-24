#ifndef __HTTPREAD_H
#define __HTTPREAD_H
#include"Iread.h"
#include"localwrite.h"
#include<curl/curl.h>

struct WriteThis 
{
  char *readptr;
  int size;
};

class HttpRead:public IRead
{
 struct WriteThis pooh,pooh1;
 struct curl_slist *chunk;
 char *buff,header[10];
 CURL *curl;
 CURLcode res;
 LocalWrite w;
 public:
 	HttpRead()
	{
		chunk=NULL;
	}

	long int fileopen(char[]);
	void fileread(char[],int csize);
	void fileclose();
	

};
#endif

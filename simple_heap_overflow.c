//Simple Heap buffer overflow
//nandunbandara
//nandunb.wordpress.com

#include<string.h>
#include<stdio.h>

void main(int argc, char** argv){
	char* buff = malloc(20);
	strcpy(buff,argv[1]);
	free(buff);
}

//author: nandun bandara
//nandunb.wordpress.com

#include<string.h>

void function(char* param){
	char local[10]; //create local char array
	strcpy(local,param); //copy param into the local array
}

void main(int argc, char** argv){
	//call the function
	function(argv[1]);
}

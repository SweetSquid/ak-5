#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <getopt.h>

using namespace std;


int main (int argc, char *argv[]){

	const char* short_options = "hafvl";

	const struct option long_options[] = {
		{"help",no_argument,0,'h'},
		{"add",no_argument,0,'a'},
		{"file",no_argument,0,'f'},
		{"version",no_argument,0,'v'},
		{"list", no_argument,0,'l'}
	};
	int rez;
	int option_index;
	int h = 0, a = 0, f = 0, v = 0, l = 0; 
	
	while ((rez=getopt_long(argc,argv,short_options,
		long_options,&option_index))!=-1){

		switch(rez){
			case 'h': {
			  if(h == 0) {
				 cout << "opt -h" << endl;
				 h = 1;
			  }
				break;
			};
			case 'a': {
					  if(a == 0) {
			a = 1;
						  cout << "opt -a" << endl;

					  }
				break;
					 
			};
	
			case 'f': {
					  if(f == 0) {
						 f = 1;
				cout << "opt -f" << endl;
					  }
				break;
					  
			};
                        case 'l': {
					  if(l == 0) {
						  l = 1;
                                cout << "opt -l" << endl;
					  }
                                break;
					  
                        };
			case 'v': {
					  if(v == 0) {
				cout << "opt -v" << endl;
				v = 1;
					  }
				break;
					
			};
			case '?': default: {
				printf("found unknown option\n");
				break;
			};
		};
	};
};

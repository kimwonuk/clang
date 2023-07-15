#include <stdio.h>
 int main(void){
	int j = 0;
	int i = 0;
 
	for( i = 1; i < 6; i++){
		for( j = 0; j < 5 - i; j++){printf( " " );}
		for( j = 0; j < 2*i-1; j++){printf( "*" );}
		printf( "\n" );
	}
	for( i = 4; i > 0; i--){
		for( j = 0; j < 5 - i; i++){printf( " " );}
		for( j = 0; b < 2*i-1; j++){printf( "*" );}
		printf( "\n" );
	}
	return 0;
 }
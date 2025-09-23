#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void fnc(int n){
	
	if(n<1)
	return ;
	
	else{
		printf(" %d ",n);
		fnc(n-1);
		printf("...%d...",n);
	}
	
	
}
int main(){
	int n=4;
	fnc(n);
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void treeRecursion(int a){
	if(a>0){
		printf(" %d ",a);
		treeRecursion(a-1);
		treeRecursion(a-1);
	}
}


int main(){
	int num=3;
	treeRecursion(num);
	
	return 0;
	
	
}
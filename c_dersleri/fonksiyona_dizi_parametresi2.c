#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//!!!
int *aks(int dizi[]){
	dizi=dizi+2;
	return dizi;
}

int main(){
	int dizi[5]={10,15,63,19,1};
	int *p;
	p=aks(dizi);
	printf("%d",*p);
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//fonksıyona dızı parametresi

int topla(int *dizi,int a){
	int t=0,i;
	for(i=0;i<a;i++)
	{
		t=t+*(dizi+i);
	}
	return t;
	
}
int main(){
	int dizi[5]={1,2,3,4,5};
	int t;
	t=topla(dizi,5);
	printf("%d",t);
	
	
	
	
	
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int fnc(int *a,int b){
	int c;
	c=*a%b;
	*a=*a/b;
	
	return c;
	
	
}


int main(){
	int a,b,c;
	
	printf("bolunen sayiyi  giriniz-->");
	scanf("%d",&a);
	
	printf("bolen sayiyi giriniz-->");
	scanf("%d",&b);
	
	c=fnc(&a,b);
	printf("bolum-->%d\n",a);
	printf("kalan-->%d",c);
	
	

	
	
}
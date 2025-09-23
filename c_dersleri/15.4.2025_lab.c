#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fonk(int *a,int b)
{
	int c;
	c=*a/b;
	*a=*a%b;
	return c;
}

int main(){
	int a,b,c;
	printf("bolunen sayi-->");
	scanf("%d",&a);
	
	printf("bolen sayi-->");
	scanf("%d",&b);
	
	c=fonk(&a,b);
	printf("bolum-->%d\n",c);
	printf("kalan-->%d",a);
	
	
	
	return 0;
}
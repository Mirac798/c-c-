#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	char a[20];
	printf("karakter giriniz-->");
	gets(a);
	char *p;
	p=a;
	int i,sayac=0;
	
	for(i=0;i<1000;i++)
	{
		if(*p!=NULL)
		{
			sayac++;
			*p++;
		}
		if(p==NULL) break;
		
	}
	
	printf("%d",sayac);
	
	
	
	
	return 0;
}
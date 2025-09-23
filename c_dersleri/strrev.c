#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	
	char a[30],b[30];
	
	printf("metin giriniz-->");
	gets(a);
	
	int d=strlen(a),i,c;
	c=d;
	for(i=0;i<d;i++)
	{
		b[i]=a[--c];
	}
	
	printf("%s",b);
	
	
	
	
	return 0;
}
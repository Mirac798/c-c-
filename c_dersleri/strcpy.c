#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	char a[20],b[20];
	
	printf("kelime giriniz-->");
	gets(a);
	int c=strlen(a),i;
	
	for(i=0;i<c;++i)
	{
		b[i]=a[i];
	}
	int d;
	d=strcmp(b,a);
	printf("sonuc-->%d",d);
	
	
	
	
	
	
	
	return 0;
}
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char a[30],b[30];
	
	printf("birinci metni giriniz-->");
	scanf("%s",a);
	
	printf("ikinci metni giriniz-->");
	scanf("%s",b);
	
	int c,d,i;
	c=strlen(b);
	d=strlen(a);
	for(i=0;i<c;i++)
	{
		a[d++]=b[i];
		
		
	}
	a[d]=NULL;
	
	printf("%s",a);
	
	

	
	
	
	
	
	return 0;
}
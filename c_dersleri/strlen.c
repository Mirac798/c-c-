#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char fonk1(char a[20]){
	int i,sayac=0;
		
	for(i=0;i<1000;i++)
	{
		if(a[i]!=NULL)
		sayac++;
		
		if(a[i]==NULL) break;
	}
	
	
	
	return sayac;
	
}

int main(){
	char a[20];

	
	printf("bir metin giriniz-->");
	gets(a);
	
	printf("%d",fonk1(a));

	
	return 0;
}
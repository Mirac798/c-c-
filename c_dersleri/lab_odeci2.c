#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char fonk(char str[20],char a){
	
	int b=strlen(str),i,sayac=0;
	
		
	for(i=0;i<b;i++)
	{
		if(a==str[i])
		sayac++;
	}
	return sayac;
	
	
}


int main(){
	
	char str[20];
	char a;
	printf("bir metin giriniz-->");
	gets(str);

	printf("istenen karakteri giriniz-->");
	scanf("%c",&a);
	

	printf("%d",fonk(str,a));
	
	
	
	
	return 0;
}


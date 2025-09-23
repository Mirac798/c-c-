#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
	
	char str1[20];
	char str2[20];
	char str3[20];

	

	printf("bir metin giriniz-->");
	gets(str1);

	
	printf("aranacak kelimeyi giriniz-->");
	gets(str2);

/*	 if (strstr(str1, str2) != NULL) {
        printf("'%s' kelimesi metin içinde bulunuyor.\n", str2);
    } else {
        printf("'%s' kelimesi metin içinde bulunmuyor.\n", str2);
    }*/
    
    int i,j,a,b,sayac=0;
    a=strlen(str1);
    b=strlen(str2);
    
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
    	{
    		str3[j]=str1[i+j];
		}
		if(strcmp(str3,str2)==0){
		sayac++;
			break;
		}
	}
    
    if(sayac>0)
    printf("aranan kelime bulunuyor");
    
    else 
    printf("aranan kelime bulunmuyor");



	
	
	
	
	
	
	
	
	return 0;
}
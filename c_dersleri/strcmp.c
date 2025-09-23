#include <stdio.h>
#include <math.h>
#include <string.h>


char fonk(char a[20], char b[20]){
	int c,d,f,i,sayac=0;
	c=strlen(a);
	d=strlen(b);
	
	if(d>c)
	f=d;
	
	else
	f=c;
	
	for(i=0;i<f+1;i++)
	{
		if(a[i]==b[i]){
			
			sayac=0;
		if(i==f) 
		break;
			}
			
			if(a[i]>b[i]){
				sayac=1;
				break;
			}
			
			if(a[i]<b[i]){
				sayac=-1;
				break;
			}
			if(a[i]=='\0'){
				sayac=-1;
				break;
			}
			
			if(b[i]=='\0'){
				sayac=1;
				break;
			}
	
	}
	
	return sayac;
	

}

int main(){
	
	char a[20],b[20];
	
	printf("birinci kelimeyi giriniz-->");
	gets(a);
	
	printf("ikinci kelimeyi giriniz-->");
	gets(b);
	
	printf("sonuc-->%d",fonk(a,b));
	
	

	return 0;
}
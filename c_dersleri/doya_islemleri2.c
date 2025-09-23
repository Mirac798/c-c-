#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(){
	FILE *fp;
	int sayac=0;
	char ch;
	fp=fopen("test.txt","r");
	if(fp==NULL){
		printf("dosya acilamadi");
		return 1;
	}
	
	while((ch=fgetc(fp))!=EOF){
		if(ch=='a')
		sayac++;
	}
	fclose(fp);
	printf("sonuc-->%d",sayac);
	
	
	
	
	
	return 0;
}
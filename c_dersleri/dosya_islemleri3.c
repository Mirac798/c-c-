#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main(){
	FILE *fp;
	fp=fopen("test.txt","r");
	int sayac=0;
	char ch;
	while(!feof(fp)){
		ch=fgetc(fp);
		if(ch=='a')
		sayac++;
		
	}
	fclose(fp);
	printf("%d",sayac);
	
	
	
	return 0;
}
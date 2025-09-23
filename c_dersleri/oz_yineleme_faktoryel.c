#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//ozyıneleme kullanılarak faktoryel hesabı
int fnc(int a){
	
	if(a<1)
	return 1;
	
	return a*fnc(a-1);
	
}

int main(){
	int a,b;
	printf("sayi giriniz-->");
	scanf("%d",&a);
	
	b=fnc(a);
	printf("sonuc-->%d",b);
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//taban ve ussu gırdıkten sonra ozyıneleme ıle hesap yapılacak
int fnc(int a,int b){
	if(b<1)
	return 1;
	
	return a*fnc(a,b-1);
}
int main(){
	
	int a,b,c;
	printf("tabani giriniz-->");
	scanf("%d",&a);
	
	printf("ussu giriniz-->");
	scanf("%d",&b);
	
	c=fnc(a,b);
	printf("sonuc-->%d",c);

	
	return 0;
	
	
}
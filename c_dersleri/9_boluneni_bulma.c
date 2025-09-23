//iki say arasından dokuza bölünen sayıalrı bulma

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int sayi1,sayi2,kucuk,buyuk,x ;
	
	printf("sayı 1:");
	scanf("%d",&sayi1);
	printf("sayı 2:");
	scanf("%d",&sayi2);
	
	buyuk = sayi1;
	kucuk =	sayi2;
	if( sayi2 > sayi1)
	{
		buyuk = sayi2;
		kucuk = sayi1;
	}
	
	for(x=kucuk+1 ; x<buyuk ; x=x+1)
		if(x%9==0)
			printf("%d\n",x);
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
	
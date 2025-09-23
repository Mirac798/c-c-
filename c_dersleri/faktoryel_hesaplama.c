// faktöriyel hesaplama

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");

	int carpim,sayi,x;
	carpim = 1;
	
	printf("sayý:");
	scanf("%d",&sayi);
	
	for(x=1 ; x<=sayi ; x=x+1)
		carpim = carpim*x;
		
	printf("%d",carpim);
	
	return 0;
}
#include <stdio.h>
#include <math.h>



int main()
{
	int n,b,yuzler,onlar,birler,toplam ;
	
	scanf("%d",&n);
	
	yuzler = n/100 ;
	b = n%100 ;
	onlar = b/10 ;
	birler = n - (yuzler*100+onlar*10);
	
	toplam = (pow(yuzler,3)+pow(onlar,3)+pow(birler,3));
	
	if(toplam==n)
	
		printf("amstorng sayisi");
		
	else
	
		printf("degil sayiniz: %d  , toplam: %d",n,toplam);	
	
	
		
	return 0;
	
}
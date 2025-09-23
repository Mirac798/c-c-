#include <stdio.h>
#include <math.h>

int main ()
{
	int sayi,x,basamak,ilkyari,ikinciyari,toplam1,toplam2,bolen;
	
	scanf("%d",&sayi);
	x = sayi;
	basamak = 0;
	while (sayi != 0)
	{
		sayi = sayi / 10;
		basamak += 1;
	}
	bolen = pow(10,basamak/2);
	ilkyari = x/bolen;
	ikinciyari = x%bolen;
	
	toplam1 = 0;
	while (ilkyari != 0)
	{
		toplam1 = toplam1 + ilkyari%10;
		ilkyari = ilkyari/10;	
	}
	
	toplam2 = 0;
	while (ikinciyari != 0)
	{
		toplam2 = toplam2 + ikinciyari%10;
		ikinciyari = ikinciyari / 10;	
	}
	
	printf("%d",toplam1*toplam2);
		
	return 0;
}
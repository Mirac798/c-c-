//kullanıcadan alınnan bir sayıya kadar olan tüm sayıların toplamını bulan program

#include <stdio.h>
#include <locale.h>

int main()
{
	
setlocale(LC_ALL,"");
	
int toplam,sayi,x ;
	
	printf("bir sayı giriniz:");
	scanf("%d",&sayi);
	
	toplam = 0;
	
	for (x=0;x<=sayi;x=x+1)
	{
		toplam = toplam + x ;
	}
	
	printf("%d",toplam);
	
		
	return 0;
}
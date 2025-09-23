//kullanıcıdan  iki sayı ve bir işlem işaret alıp işlem yapan program

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL ,"");
	
	int sayi1,sayi2 ;
	char islem;
	
	printf("birinci sayıyı giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayıyı giriniz:");
	scanf("%d",&sayi2);
	
	printf("yapacağınız işlem:");
	scanf(" %c",&islem);
	
	if (islem == '+')
		printf("sayılar toplamı:%d",sayi1+sayi2);
	
	else if (islem == '-')
		printf("sayılar farkı:%d",sayi1-sayi2);
		
	else if (islem == '*')
		printf("sayılar çarpımı:%d",sayi1*sayi2);
			
	else if (islem == '/')
		printf("sayılar oranı:%d",sayi1/sayi2);
		
	else if (islem == '%')
		printf("sayılar modu:%d",sayi1%sayi2);	
	
	else if (islem == 'p')
		printf("1.sayının 2incye göre kuvveti:%d",pow(sayi1,sayi2));
	
	
	
	return 0 ;
}
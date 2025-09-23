//5 sayının ortalamasını yazdıran program

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float sayi1,sayi2,sayi3,sayi4,sayi5 ,ortalama ;
	
	printf("sayı 1:");
	scanf("%f",&sayi1);
	printf("sayı 2:");
	scanf("%f",&sayi2);
	printf("sayı 3:");
	scanf("%f",&sayi3);
	printf("sayı 4:");
	scanf("%f",&sayi4);
	printf("sayı 5:");
	scanf("%f",&sayi5);
	
	ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5;
	
	printf("%.2f",ortalama);
	
return 0 ;
}
	
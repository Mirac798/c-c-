//bir sayının pozitif mi negatif mi olduğunu hesaplayan program

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1 ;
	
	printf("bir sayı giriniz:");
	scanf("%d",&sayi1);
	
	if (sayi1 > 0)
		printf("sayınız pozitif");
	
	else if (sayi1 == 0)
		printf("sayınız sıfır");
		
	else
		printf("sayınız negatif");		
	
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct ogrenci{
	char isim[20];
	int yas;
	

};

int main(){
	struct ogrenci ogr[3];
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("%d.ogrencinin ismini giriniz-->",i+1);
        scanf("%s",&ogr[i].isim);
		printf("%d.ogrencinin yasini giriniz-->",i+1);
		scanf("%d",&ogr[i].yas);
	}
	int deger=ogr[0].yas,sayac=0;
	for(j=0;j<3;j++)
	{
		if(deger<ogr[j].yas)
		{
			deger=ogr[j].yas;
			sayac++;
		}
		
	}	
	printf("******************VERILER******************\n");
	printf("yasi en buyuk olan ogrenci-->%s\n",ogr[sayac].isim);
	printf("islem tamamlanmistir :)\n");
	printf("hata giderildi");
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int Binary_Search(int dizi[],int ilkSayi,int SonSayi,int istenilenSayi);
int main()
{
    int dizi[20]={1,2,3,23,24,29,31,33,36,37,40,46,49,53,59,62,67,75,76,85};
    int istenilen_sayi=40;
    int DizininBoyutu=sizeof(dizi)/sizeof(dizi[0]);//* Dizinin boyutunu hesapla
                                                    
    Binary_Search(dizi,0,DizininBoyutu-1,istenilen_sayi);//* Arama fonksiyonunu Ã§aÄŸÄ±r
    return 0;
}
int Binary_Search(int dizi[],int ilkSayi,int SonSayi,int istenilenSayi)
{
    int Ortadaki_Sayi=(SonSayi-ilkSayi)/2+ilkSayi;//* Orta indeksi hesapla
    if(dizi[Ortadaki_Sayi]==istenilenSayi)
    {
        printf("istenilen sayi %d indexte ",Ortadaki_Sayi);
        return 1;//* BulunduÄŸunda 1 dÃ¶ndÃ¼r
    }   
    //* SayÄ± ortadaki sayÄ±dan kÃ¼Ã§Ã¼kse SOL tarafa git 
    if(dizi[Ortadaki_Sayi]>istenilenSayi)
        Binary_Search(dizi,ilkSayi,Ortadaki_Sayi,istenilenSayi);
    //* SayÄ± ortadaki sayÄ±dan bÃ¼yÃ¼kse SAÄ tarafa git 
    else if(dizi[Ortadaki_Sayi]<istenilenSayi)
        Binary_Search(dizi,Ortadaki_Sayi,SonSayi,istenilenSayi);

        
    return 0;
}
	

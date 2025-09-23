/*
!Bir kaÄŸÄ±t oyunu (iskambil kaÄŸÄ±t ) 4 oyuncuya 52 kaÄŸÄ±t daÄŸÄ±tmanÄ±zÄ± istenmektedir.
!Åartlar 
*1)oyuncularÄ±n kaÄŸÄŸÄ±t sayÄ±sÄ± eÅŸit olamalÄ± .
*2)kaÄŸÄ±tlar karÄ±ÅŸÄ±k olmalÄ± .
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct Card
{
    char Card_Name[10];
    char Card_Number[10];
} Card;
void StackCreat(Card stack[52])
{
    char *type[] = {"Kupa ", "Maca ", "Sinek", "Karo "};
    char *Number_of_type[] = {"As   ", "iki  ", "Uc   ", "Dort ", "Bes  ", "Alti ", "Yedi ", "Sekiz", "Dokuz", "On   ", "Genc ", "Kiz  ", "Kiral"};
    int i, j, k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 13; j++)
        {
            strcpy(stack[k].Card_Name, type[i]);
            strcpy(stack[k].Card_Number, Number_of_type[j]);
            k++;
        }
    }
}
void Dagit(Card stack[52], int Dizi[52])
{
    FILE *fp = fopen("Bilgi1.txt", "w");
    fprintf(fp, "1.oyuncu  \t\t2.oyunuc  \t\t3.oyuncu  \t\t4.oyuncu\n");
    int i, j;
    for (j = 0; j < 52;)
    {
        i = Dizi[j++];
        fprintf(fp, "%s %s  \t", stack[i].Card_Name, stack[i].Card_Number);
        i = Dizi[j++];
        fprintf(fp, "%s %s  \t", stack[i].Card_Name, stack[i].Card_Number);
        i = Dizi[j++];
        fprintf(fp, "%s %s  \t", stack[i].Card_Name, stack[i].Card_Number);
        i = Dizi[j++];
        fprintf(fp, "%s %s  \n", stack[i].Card_Name, stack[i].Card_Number);
    }

    fclose(fp);
}
void karistir(int dizi[52])
{
    srand(time(NULL));

    int temp, i = 0, j = 0, Bulundu;
    while (i < 52)
    {
        Bulundu = 0;
        temp = rand() % 52;
        for (j = 0; j < i; j++)
        {
            if (temp == dizi[j])
            {
                Bulundu = 1;
                break;
            }
        }
        if (!Bulundu)
            dizi[i++] = temp;
    }
}
int main()
{
    Card stack[52];
    int Dizi[52];
    StackCreat(stack);
    karistir(Dizi);
    Dagit(stack, Dizi);
}

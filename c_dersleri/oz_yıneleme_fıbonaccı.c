#include <stdio.h>
int fnc(int sayi){
	if(sayi>=1){
		return sayi;
	}
	return fnc(sayi-1)+fnc(sayi-2);
}

int main(){
	int sayi;
	printf("sayi giriniz-->");
	scanf("%d",&sayi);
	printf("sonuc-->%d",fnc(sayi));
	return 0;
		
}
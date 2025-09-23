#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int dizi[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int a,b,toplam=0;
	
	for(a=0;a<5;a++)
	{
		for(b=0;b<3;b++)
		{
			toplam=toplam+dizi[b][a];
		}
		printf("%d\n",toplam);
		toplam=0;
	}
	
	
	
	
	
	
	
	
	return 0;
}
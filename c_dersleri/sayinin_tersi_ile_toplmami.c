#include <stdio.h>
#include <math.h>

int main ()
{
	int ilksayi,sayi,ters,x;
	scanf("%d",&sayi);
	ilksayi = sayi;
	ters = 0;
	while(sayi != 0)
	{
		ters = ters*10 + (sayi%10);
		sayi /= 10;
	}
	
	printf("%d\n",ilksayi);
	printf("%d\n",ters);
	printf("%d",ilksayi+ters);
	
	
	return 0;
}
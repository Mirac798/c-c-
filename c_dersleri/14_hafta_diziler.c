#include <stdio.h>

int main()
{
	int basamaksayisi,userinput,userinput1,i;
	
	printf("bir sayi giriniz:");
	scanf("%d",&userinput);
	
	basamaksayisi = 0;
	userinput1 = userinput;	
	
	while(userinput1>0)
	{
		userinput1 = userinput1/10;
		basamaksayisi += 1;	
	}
	int dizi[basamaksayisi];
	
	for (i=basamaksayisi-1 ; i>=0 ; i--)
	{
		dizi[i]=userinput%10;
		userinput = userinput/10;
		printf("%d\n",dizi[i]);
	}
	
	
	return 0;
}
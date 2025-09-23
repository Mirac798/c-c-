#include <stdio.h>
int islem()
{
	printf("1-faktoriyel hesaplama\n");
	printf("2-fibonacci serisi\n");
	printf("3-ortanca deger bulma\n");
	printf("yapmak istediðiniz islemi secin:\n");	 	
}

int fak(int sayi)
{
	int carpim,i;
	carpim = 1;
	for(i=1 ; i<=sayi ; i+=1)
		carpim *= i;
	return carpim;	
}

int ortanca(int sayi1,int sayi2,int sayi3)
{
	int ortanca = 0;
	if ((sayi1 <= sayi2 && sayi1>= sayi3)||(sayi1<=sayi3 && sayi1>= sayi2))
		ortanca = sayi1;
	else if ((sayi2 <= sayi1 && sayi2>= sayi3)||(sayi2<=sayi3 && sayi2>= sayi1))
		ortanca = sayi2;
	else if ((sayi3 <= sayi2 && sayi3>= sayi1)||(sayi3<=sayi1 && sayi3>= sayi2))
		ortanca = sayi3;
	
	return ortanca;			
}

void fib(int sayi)
{
	int sayi1,sayi2,sayi3;
	sayi1 = 1;
	sayi2 = 1;
	sayi3 = 1;
	while(1)
	{
		sayi1 = sayi2;
		sayi2 = sayi3;
		sayi3 = sayi1 + sayi2;
		
		printf("%d ",sayi1);
		if (sayi <= sayi3)
		{
			printf("\n");
			break;
		}
	}
}



int main()
{
	int sayi,sayi1,sayi2,sayi3,sayi4,sayi5;
	
	while(1)
	{
		islem();
		scanf("%d",&sayi);
		if (sayi == 1)
		{
			printf("faktoriyelini bulmak istediginiz sayi:\n");
			scanf("%d",&sayi1);
			printf("%d\n",fak(sayi1));
		}
		else if (sayi ==2)
		{
			printf("fibonacci sayi dizisini bulmak istediginiz sayi:\n");
			scanf("%d",&sayi2);
			fib(sayi2);
		}
		else if (sayi ==3)
		{
			printf("ortancasini bulmak istediginiz sayilar:\n");
			scanf("%d%d%d",&sayi3,&sayi4,&sayi5);
			printf("%d\n",ortanca(sayi3,sayi4,sayi5));
		}
		else
			break;
	}
	return 0;
}
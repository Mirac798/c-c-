#include <stdio.h>
#include <math.h>

int main(){
	int matris[3][5];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%d][%d]-->",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
		
	}
	
	int e,f;
	
	for(e=0;e<3;e++)
	{
		for(f=0;f<5;f++)
		{
			printf("%d ",matris[e][f]);
		}
		printf("\n");
	}
	
	int a,b,toplam=0;
	
	for(a=0;a<3;a++)
	{
		for(b=0;b<5;b++)
		{
			toplam=toplam+matris[a][b];
		}
		printf("%d. satir toplami-->%d\n",a+1,toplam);
		toplam=0;
	}
	
	
	




   return 0;
}
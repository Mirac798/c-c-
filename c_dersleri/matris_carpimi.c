#include <stdio.h>
#include <math.h>


int main(){
	
	int dizi1[5][4]={{8,4,1,9},{8,1,2,1},{2,2,3,4},{2,1,0,9},{3,4,5,6}};
	int dizi2[4][3]={{1,2,3},{0,2,3},{4,7,1},{5,8,2}};
	int carpim[5][3];
	int a,b,c,toplam=0;
	
	for(a=0;a<5;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<4;c++)
			{
				toplam=toplam+(dizi1[a][c]*dizi2[c][b]);
			}
			carpim[a][b]=toplam;
			toplam=0;
		}
	}
	
	int i,j;
	printf("-----------CARPim SONUCLARi--------------\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("    %d   ",carpim[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
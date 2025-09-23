#include <stdio.h>
#include <math.h>


int main(){
	
	int matris[3][3]={{2,5,7},{11,17,1},{7,9,10}};
	int i,j,a,sayac=0,c,sayac1=0,d;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c=matris[i][j];
			if(c==1)
			sayac1--;
			
			if(c==2)
			{
				sayac1++;
			}
			
			else
			{
				for(a=2;a<c;a++)
				{
					if(c%a==0)
					sayac++;
					
				}
				if(sayac==0)
				{
				sayac1++;
				
					
				}
				sayac=0;
			
				
			}
			
		}
	}
	

	
	printf("sonuc-->%d",sayac1);
	
	
	return 0;
}
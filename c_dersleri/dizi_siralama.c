#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int dizi1[10]={1,3,5,2,7,9,10,11,45,4};

	int i,j,a;
	
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(dizi1[i]>dizi1[j]){
			
			a=dizi1[j];
			dizi1[j]=dizi1[i];
			dizi1[i]=a;
		}
		}
	}
	

	int b;
	
	for(b=0;b<10;b++)
	{
		printf("%d\n",dizi1[b]);
	}
	
	
	
	
	
	return 0;
}
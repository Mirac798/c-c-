#include <stdio.h>

int main()
{
	int i;
	int dizi[20]={2,5,3,6,4,2,7,4,6,3,1,4,2,5,7,5,3,4,2,6};
	for(i=0 ; i<18 ; i++)
	{
		if(dizi[i]>dizi[i+1] && dizi[i]>dizi[i+2])
			printf("%d ",dizi[i]);
		else if(dizi[i+1]>dizi[i] && dizi[i+1]>dizi[i+2])
			printf("%d ",dizi[i+1]);
		else
			printf("%d ",dizi[i+2]);		
	}	
	return 0;
}
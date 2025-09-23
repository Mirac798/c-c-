#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
	
/*	int a[10]={1,4,7,3,2,8,10,11,45,5};
	int b[10];
	int *p;
	p=&a[9];
	int i;
	for(i=0;i<10;i++)
	{
		b[i]=*p--;
		printf("%d ",b[i]);
	
	}*/


  int dizi[10]={1,4,7,3,2,8,10,11,45,5};
  int *p;
  p=dizi;
  int i,j,b;
  
  
  for(i=0;i<10;i++)
  {
  	for(j=0;j<10;j++)
  	{
  		if(*p>dizi[j])
  		{
  			b=dizi[j];
  			dizi[j]=*p;
  			*p=b;
  			
		  }
	  }
	  p++;
  }
  
  int c;
  for(c=0;c<10;c++)
  {
  	printf("%d\n",dizi[c]);
  }

	  
	
	
	
	return 0;
}
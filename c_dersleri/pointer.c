#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
    int dizi[10]={1,4,2,5,7,8,3,11,14,21};
    int dizi2[10];
	int *p=dizi;
	int i,j,b,c;
	for(c=0;c<10;c++)
	{
		dizi2[c]=dizi[c];
	}



for(i=0;i<10;i++){

		for(j=0;j<10;j++)
		{
			if(*p>dizi2[j])
			{
				b=dizi2[j];
				dizi2[j]=*p;
				p=b;
			
				
			}
		
			
		}
		p++;
	}
   
	
int a;

for(a=0;a<10;a++)
{
	printf("%d\n",dizi2[a]);
}

	
	return 0;
}
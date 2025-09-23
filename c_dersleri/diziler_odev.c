#include <stdio.h>

int main()
{
	int i,a,b,sayma;
	bool bol;
	
	int dizi[20]={9,9,3,3,3,3,3,6,5,5,0,0,0,0,0,1,1,3,3,3};

	sayma = 0;
	
	for(i=0 ; i<20 ; i++)
	{
		bol = false;
		for(b=i-1 ; b>=0 ; b--)
		{
			if(dizi[i]==dizi[b])
				bol = true;
		}
		if(bol)
			continue;
		
		
		for(a=i ; a<20 ; a++)
		{
			if(dizi[a]==dizi[i])
				sayma+=1;
		}
		printf("%d dan %d tane var.\n",dizi[i],sayma);
		sayma = 0;
			
	}
	return 0;
}
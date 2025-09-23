#include <stdio.h>
#include <math.h>

int main()
{
	int y,r;
	float x;
	
	r=15;
	
	for(y=r ; y>=-r ; y-=1)
	{
		for(x=-r ; x<=r ; x+=1)
		{
			if(x*x + y*y <= r*r)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");			
	}
	

	
	
	return 0;
}
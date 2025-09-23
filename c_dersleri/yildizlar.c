#include <stdio.h>

int main()
{
	int n,i,j,n1,n2;
	scanf("%d",&n);
	n1 = n;
	n2 = 2*n;
	
	for(i=1 ; i<=n ; i+=1 )
	{
		for(j=1 ;j<=n2 ; j+=1)
		{
			if(j < n1)
				printf(" ");
			else
				printf("*");		
		}
		n1 = n1-1;
		n2 = n2-1;
		printf("\n");
	}
	
	
	return 0;
}
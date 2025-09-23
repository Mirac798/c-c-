
//ikinci dereceden denklemin köklerini bulan program 

#include <stdio.h>
#include <math.h>

int main()

{
	
	float kok1,kok2,dis,a,b,c; 
	
	printf("ussu iki olan bilinmezin kat sayisi :");
	scanf("%f",&a);
	
	printf("ussu bir olan bilinmezin kat sayisi :");
	scanf("%f",&b);
	
	printf("sabit sayi :");
	scanf("%f",&c);
	
	
	dis = pow(b,2)-4*a*c;
	
	if(dis>0)
		
		{
		kok1 = ((-b+pow(dis,1/2))/(2*a));
		kok2 = ((-b-pow(dis,1/2))/(2*a));
		
		printf("birinci kok : %f\n",kok1);
		printf("ikinci kok : %f\n",kok2);
		
		}
		
	else if (dis==0)
	
		{
		kok1 = (-b)/(2*a);
		
		printf("katli kok : %f\n",kok1);
		
		}
	
	else
		printf("reel kok yok");
	
	
	
	
	
	return 0;
}
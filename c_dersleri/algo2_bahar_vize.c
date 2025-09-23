#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//bahar donemı - algo 2 -vize - atlama sorusu?
//@mmirac._
int main(){
	int a[6][6]={{2,3,1,1,2,6},{1,2,9,4,3,7},{9,1,10,5,4,8},{9,1,1,2,1,1},{1,1,2,1,1,1},{2,2,1,1,2,1}};
	int i,c=a[0][0],tot,f,j,sayac=0;
	tot=c;


    for(i=0;i<36;i++)
	{
		if(c<=6)
 {
		
		for(j=0;j<6;j++)
	{		
			if(c%2==0)
			{
					tot=tot+a[i][c];
		        	c=a[i][c];
					sayac+=c;	
			}
		
		if(c%2!=0) break;
		
    	}
  }
  
  else
  {
  	for(f=0;f<6;f++)
   	{
   		if(c%2==0)
   		{
   			tot=tot+a[i][6-sayac];
		   	c=a[i][6-sayac];
		   	
   			
		   }
  		
     }
  }
	
	
	
		if(i==35) break;
		

		
	}
	
	
	
	
	
	
	
	
	return 0;
}
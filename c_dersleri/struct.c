#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


struct calisan{
	
	char name[30];
	char surName[30];
	int maas;
};


void calis(struct calisan ob)
{
	printf("Name-->%s\n",ob.name);
	printf("Surname-->%s\n",ob.surName);
	printf("Wage-->%d",ob.maas);
	printf("\n\n");
	
}


int main()
{
	struct calisan ob1,ob2;
	strcpy(ob1.name,"ahmet");
	strcpy(ob1.surName,"yidirim");
	ob1.maas=10000;
	strcpy(ob2.name,"sezer");
	strcpy(ob2.surName,"simsek");
	ob2.maas=20000;
	calis(ob1);
	calis(ob2);
	
	
	
	
	
	return 0;
}
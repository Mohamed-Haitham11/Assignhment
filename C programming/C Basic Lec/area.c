/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: mohamamed
 */
#include "stdio.h"
int main(){int r;char choise;
printf("enter the radius\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
printf("enter the choise\n");
fflush(stdin);fflush(stdout);
scanf("%c",&choise);
if(choise=='a'){
	float area=3.14*r*r;
	printf("Area is %f\n",area);

}
if(choise=='b'){
	float cir=2*3.14*r;
	printf("cir is %f\n",cir);

}
else printf("error\n");

return 0;
}

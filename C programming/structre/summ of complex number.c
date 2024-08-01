#include"stdio.h"
struct complex{ float real;float imagine;}a,b,c;
void add (struct complex a,struct complex b){
	c.real=a.real+b.real;
	c.imagine=a.imagine+b.imagine;
	printf("the sum is %f+%fi \n",c.real,c.imagine);
	fflush(stdin)	;fflush(stdout);

}


int main(){
	printf("Enter first number \n");
	fflush(stdin)	;fflush(stdout);
	scanf("%f %f",&a.real,&a.imagine);
	printf("Enter second number \n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&b.real,&b.imagine);
add(a,b);
	return 0;}


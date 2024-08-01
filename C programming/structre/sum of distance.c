#include"stdio.h"
struct distance{ int feet;float inch;}a,b,c;
int main(){
	printf("Enter first distance in feet \n");
	fflush(stdin)	;fflush(stdout);
	scanf("%d",&a.feet);
	printf("Enter first distance in inch \n");
	fflush(stdin)	;fflush(stdout);
	scanf("%f",&a.inch);
	printf("Enter second distance in feet \n");
	fflush(stdin)	;fflush(stdout);
	scanf("%d",&b.feet);
	printf("Enter second distance in inch \n");
	fflush(stdin)	;fflush(stdout);
	scanf("%f",&b.inch);
	c.feet=a.feet+b.feet;
	c.inch=a.inch+b.inch;
	if(c.inch>12){c.inch-=12;++c.feet;}

	printf("the sum feet = %d\t inch =%f \n",c.feet,c.inch);

}



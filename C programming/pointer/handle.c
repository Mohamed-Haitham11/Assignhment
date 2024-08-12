
#include<stdio.h>
#include<string.h>
void main(){
	int m =29;
	int *ab=&m;
	printf("value of m= %d\t the address =%p\n",m,&m);
	printf("value of ab= %d\t the address =%p\n",*ab,ab);
	m=34;
	printf("value of ab= %d\t the address =%p\n",*ab,ab);
	*ab=7;
	printf("value of m= %d\t the address =%p\n",m,&m);
}

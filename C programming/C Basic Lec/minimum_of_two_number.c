
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the two numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("minimum is %d\n",(a<b)?a:b);
return 0;
}

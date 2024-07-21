#include<stdio.h>
#include<string.h>
int fact(int num){
	if(num==0||num==1) return 1;
	else return num*fact(num-1);



}



int main(){int num ;
printf("Enter The number\n");
fflush(stdin);fflush(stdout);
scanf("%d",&num);
printf("the factorial is %d",fact(num));


return 0;
}

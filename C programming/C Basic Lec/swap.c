
#include<stdio.h>
int main(){
int x=5;int y=6;
printf("x and y before swap x=%d y=%d \n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("x and y after swap x=%d y=%d \n",x,y);


	return 0;
}

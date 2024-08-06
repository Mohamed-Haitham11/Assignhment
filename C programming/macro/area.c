
#include<stdio.h>
#include<string.h>
#define function(name) void fun##name (float r){printf("Area is %f",3.14*r*r);}
function(area);

int main(){
funarea(3);
return 0;
}


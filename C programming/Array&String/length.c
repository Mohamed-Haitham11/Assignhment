// Online C compiler to run C program online

#include<stdio.h>
int main(){int count=0;char x[100];
printf("enter the string\n");
fflush(stdin);fflush(stdout);
scanf("%s",x);
for (int i=0;x[i]!=0;i++){count ++;}
printf("the len is %d",count);


return 0;
}



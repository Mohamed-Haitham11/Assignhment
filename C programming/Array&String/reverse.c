#include<stdio.h>
#include<string.h>
int main(){char x[100];char temp;
printf("enter the string\n");
fflush(stdin);fflush(stdout);
scanf("%s",x);
int m =strlen(x);
for (int i=0;i<m/2;i++){temp=x[i];
x[i]=x[m-1-i];
x[m-1-i]=temp;
}

printf("the new string is %s",x);



return 0;
}


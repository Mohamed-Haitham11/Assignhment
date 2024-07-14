// Online C compiler to run C program online

#include<stdio.h>
int main(){int count=0;char x[100];char target;
printf("Enter the string\n");
fflush(stdin);fflush(stdout);
scanf("%s",x);
printf("enter the target\n");
fflush(stdin);fflush(stdout);
scanf("%c",&target);
for(int i=0;x[i]!='\0';i++){if(target==x[i]) count++;}
printf("the target found %d time ",count);
return 0;
}



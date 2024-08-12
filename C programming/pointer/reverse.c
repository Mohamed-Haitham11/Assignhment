
#include<stdio.h>
#include<string.h>
void main(){
char str [100];
printf("enter the string\n");
fflush(stdin);fflush(stdout);
gets(str);
int m = strlen(str);
m--;
char *ptr=str;
do{
	printf("%c",*(ptr+m));
	m--;

}while(m>=0);

}

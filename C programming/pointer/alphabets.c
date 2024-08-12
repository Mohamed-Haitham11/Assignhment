
#include<stdio.h>
#include<string.h>
void main(){
	char m='A';
char*ptr= &m;
do{
	printf("%c\t",*ptr);
	(*ptr)++;
}while(*ptr<='Z');


}

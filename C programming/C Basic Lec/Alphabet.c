#include<stdio.h>
int main(){char c;
printf("enter the character\n");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	printf("Alphapet");
else printf(" Not Alphapet");


	return 0;
}

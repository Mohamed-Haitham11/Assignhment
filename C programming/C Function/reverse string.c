#include<stdio.h>
#include<string.h>
void reverse(char string [],int z){if(z<0) return;
printf("%c",string[z]);
reverse(string,--z);



}



int main(){ char string [100]; int z;
printf("Enter The sentence\n");
fflush(stdin);fflush(stdout);
gets(string);
 z =strlen(string);
reverse(string,z-1);


return 0;
}

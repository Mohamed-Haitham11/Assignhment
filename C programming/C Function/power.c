#include<stdio.h>
#include<string.h>
int powerr (int base ,int power){if(power==0) return 1;
return base *powerr(base,--power);



}



int main(){ int base ,power;int z;
printf("Enter the base\n");
fflush(stdin);fflush(stdout);
scanf("%d",&base);
printf("Enter the power\n");
fflush(stdin);fflush(stdout);
scanf("%d",&power);
z=powerr(base,power);
printf("the result is %d\n",z);


return 0;
}

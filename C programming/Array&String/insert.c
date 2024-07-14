// Online C compiler to run C program online

#include<stdio.h>
int main(){int k;
int n;int x[100];int number ,j;
printf("Enter the number\n");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
printf("Enter the array\n");
fflush(stdin);fflush(stdout);
for(int i=0;i<n;i++){scanf("%d",&x[i]);}
printf("Enter the number yiu want to insert\n");
fflush(stdin);fflush(stdout);
scanf("%d",&number);
printf("Enter the index\n");
fflush(stdin);fflush(stdout);
scanf("%d",&j);
for(int i=n+1;i>j;i--){x[i]=x[i-1];
}
x[j]=number;
printf(" the new array\n");
for(k=0;k<n+1;k++){printf("%d", x[k]);}

return 0;
}



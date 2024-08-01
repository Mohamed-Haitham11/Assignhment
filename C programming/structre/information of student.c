#include"stdio.h"
struct student {char name[100];int roll;float marks;};
int main(){struct student person [2];int i;
for ( i=0;i<2;i++){
	printf("Enter information of person number %d\n",i+1);
	printf("Enter the name\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",person[i].name);
	printf("Enter the roll\n");
	scanf("%d",&person[i].roll);
	printf("Enter the marks\n");
	scanf("%f",&person[i].marks);
}
for ( i=0;i<2;i++){
	printf(" information of person number %d\n",i+1);
	printf(" the name %s\n",person[i].name);
	fflush(stdin);fflush(stdout);
	printf(" the roll %d\n",person[i].roll);
	printf(" the marks %f\n",person[i].marks);
}
return 0;
}


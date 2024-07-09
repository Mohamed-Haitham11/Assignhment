
#include<stdio.h>
int main(){int n ;float sum=0 ; float degree;
printf("Enter the number of students\n");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("Enter the degree of student %d\n",i);
	fflush(stdin);fflush(stdout);
	scanf("%f",&degree);
	sum=sum+degree;
}
float average=sum/n;
printf("the average is %f\n",average);

return 0;
}



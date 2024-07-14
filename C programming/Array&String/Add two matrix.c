#include<stdio.h>
int main(){int a [2][2];int b [2][2];int c [2][2];
printf("enter first matrix\n");
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++)
		scanf("%d",&a[i][j]);
}
printf("enter second matrix\n");
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++)
		scanf("%d",&b[i][j]);
}
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++) c[i][j]=a[i][j]+b[i][j];
}
printf("result is\n");
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++) printf("%d\t",c[i][j]);
	printf("\n");

}
	return 0;
}

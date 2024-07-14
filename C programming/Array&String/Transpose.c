
#include<stdio.h>
int main(){int row,col;
printf("Enter number of rows and column\n");
fflush(stdin);fflush(stdout);
scanf("%d %d",&row,&col);
int m[100][100];int n[100][100];
printf("Enter the matrix\n");


for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		scanf("%d",&m[i][j]);

	}
}
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		n[j][i]=m[i][j];

	}
}
printf("the entered matrix\n");

for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		printf("%d\t",m[i][j]);

	}
	printf("\n");
}
printf("the transposed matrix\n");

for(int i=0;i<col;i++){
	for(int j=0;j<row;j++){
		printf("%d    ",n[i][j]);
	}
	printf("\r\n");
}
return 0;
}


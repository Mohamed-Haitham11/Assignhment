
#include<stdio.h>
#include<string.h>
void main(){
	int m[15];int n;int i;
	int *ptr;
	ptr=m;
	printf("Enter the number of elements\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for( i=0;i<n;i++,ptr++){
		printf("Enter the element\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
	}
	n--;
	ptr=m;
	printf("array in reverse order\n\n");
	do{
		printf("%d\t",*(ptr+n));
		n--;

	}while(n>=0);

}

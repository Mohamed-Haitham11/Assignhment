#include<stdio.h>
#include<string.h>
void func(int x,int y){int i,j;int k;
	for(i=x;i<=y;i++){
		for(j=2;j<i/2;j++){ k=0;
		if(i==j) continue;
			if(i%j==0){k=1;break;}


		}
		if(!k) printf("%d is prime\n",i);
	}

return;
}



int main(){int x,y;
printf("Enter two number\n");
fflush(stdin);fflush(stdout);
scanf("%d %d",&x,&y);
func(x, y);



return 0;
}






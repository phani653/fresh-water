#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<n;j++) printf(" ");
		for(j=1;j<=2*i-1;j++){
			if(j==1 || j==2*i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	/* phani */
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++) printf(" ");
		for(j=2*n-(2*i-1);j>=1;j--){
			if(j==2*n-(2*i-1) || j==1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int n;
	int a[n];
	
	printf("enter size :");
	scanf("%d",&n);
	
	int i,sum=0;
	printf("enter numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	int total=n*(n+1)/2;
	
	int res=total-sum;
	printf("missing number is:%d",res);
}

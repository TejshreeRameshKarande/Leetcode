#include<stdio.h>
int main(){
	int n;
	int a[n];
	
	printf("Enter size:");
	scanf("%d",&n);
	
	int i;
	printf("List of Number is:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int target;
	printf("Target:");
	scanf("%d",&target);
	
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int sum=(a[i]+a[j]);
			if(sum==target)
			{
				printf("Index:%d %d",i,j);
			}
		}
	}
}

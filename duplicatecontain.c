#include<stdio.h>
int duplicate(int n,int a[n]);
int main(){
	int n;
	printf("enter size of element:");
	scanf("%d",&n);
	
	int i,j;
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

    int res=duplicate(n,a);
	if(res==0){
		printf("true");
	}
	else{
		printf("false");
	}
}

int duplicate(int n,int a[n]){
    int i,j;
    for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				return 0;
				break;
			}
		}
	}
	
}	
	

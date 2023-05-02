#include<stdio.h> 
void primefact(int n){
	
	int i=2;
	while(n!=1){
		
		if(n%i==0){
			while(n%i==0){
				
				printf("%d\n",i);
				n=n/i;
			}
		}
		i++;
	}
	
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	primefact(n);
	return 0;
}

#include<stdio.h> 
void main(){
	
	
	float power;
	printf("Enter the power of e\n");
	scanf("%f",&power);
	int acc=10;
	float ans=1;
	float temp=1;
	int i;
	for(i=1;i<=acc;i++){
		
		
		temp=(temp*power)/i;
		ans=ans+temp;
	}
	printf("%f",ans);
}


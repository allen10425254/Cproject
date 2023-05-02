#include<stdio.h>
#include<stdlib.h>

int reverse(int number){
	int ans=0;
	while(number!=0){
		int num=number%10;
		ans=ans*10+num;
		number=number/10;	
	}
	return ans;
}

void main() {
	int a[]={234,456,19,879,96,235};
	int size=6;
	int i=0;
	for(i=0;i<6;i++){
		int rev;
		rev=reverse(a[i]);
		printf("Original number:%d REVERSE number %d\n",a[i],rev);
	}
}

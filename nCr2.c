#include<stdio.h>
int factorial(int n){
	if(n==1||n==0){
		return 1;
	
	}
	return n*factorial(n-1);
}
int nCr(int n, int r){
	return factorial(n)/(factorial(r)*factorial(n-r));
}
void main() {
	
	int n;
	printf("enter number of row\n");
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d ",nCr(i,k));
		}
		printf("\n");
	}
	//�u�p��}�l���ť�
	//�M��C�L�X�ƭ�
	//�᭱�������U�@��ҥH�ť� 
	
}

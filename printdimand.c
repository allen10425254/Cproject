#include<stdio.h>

void main(){
	int totalRow=5;
	int row,colspace,colstar;
	for(row=1;row<=totalRow;row++){
		
		for(colspace=totalRow-row;colspace>=1;colspace--){
			
			printf(" ");
		}
		for(colstar=1;colstar<=2*row-1;colstar++){
			printf("*");
			
		}
		printf("\n");
	}
	for(row=totalRow-1;row>=1;row--){
		for(colspace=1;colspace<=totalRow-row;colspace++){
			printf(" ");
		}
		for(colstar=1;colstar<=2*row-1;colstar++){
			printf("*");
		}
		printf("\n");
	}
}


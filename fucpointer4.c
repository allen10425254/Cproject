#include <stdio.h>
#include<stdlib.h>
int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
int main(){
	
	int (*fp)(int ,int);
	fp=add;
	printf("fp=add, ans=%d\n",(*fp)(5,3));
	fp=sub;
	printf("fp=sub, ans=%d\n",(*fp)(5,3));
	
	return 0;
}

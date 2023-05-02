#include<stdio.h>

int main(){
	
	
	int x=100;
	int *xp = &x;
	printf("x=%d at addr=%p\n",x,xp);
	printf("value=%d at addr=%p\n",*xp,xp);
	printf("xp has addr=%p\n",&xp);
	return 0;
}

/* int *yp=5 (X)
int *yp=&y (O)
*yp=5 (O)
*yp=&y (X)
*/
#include<stdio.h>
void swap(int *x,int *y){
	
	int t=*x;
	*x=*y;
	*y=t;
}

int main(){
	
	int x=3, y=5;

	swap(&x,&y);
	printf("x=%d, y=%d\n",x,y);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int id;
	float height;
	float weight;
	char sex;
	char name[20];
	
};
int main(){
	
	struct student stuA;
	printf("ID:");
	scanf("%d",&(stuA.id));
	printf("%8d\n", stuA.id);
	system("pause");
	return 0;
	
}

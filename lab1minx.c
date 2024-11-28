#include <stdio.h>
int main(){
	int a,b;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Another Number: ");
	scanf("%d",&b);
	if (a > b){
		printf("A more than B");
	}
	else{
		printf("B more than A");
	}
	return 0;
}

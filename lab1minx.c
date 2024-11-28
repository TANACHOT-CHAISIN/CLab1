#include <stdio.h>
int main(){
	int a,b;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Another: ");
	scanf("%d",&b);
	if (a > b){
		printf("%d more than %d  |diff: %d",a,b,(a-b));
	}
	else{
		printf("%d more than %d |diff: %d",b,a,(b-a));
	}
	return 0;
}

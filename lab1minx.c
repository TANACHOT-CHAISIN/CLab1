#include <stdio.h>
int main(){
	int a,b;
	printf("Enter First Number And Another Number: ");
	scanf("%d %d",&a,&b);
	if (a > b){
		printf("%d more than %d  diff: %d",a,b,(a-b));
	}
	else{
		printf("%d more than %d diff: %d",b,a,(b-a));
	}
	return 0;
}

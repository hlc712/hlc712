#include<stdio.h>
void main(){
	int x;
	scanf("%d",&x);
	if(x<1){
		printf("y=x");
	}
	else if(x<10&&x>=1)
		printf("y=2x-1");
	else{
		printf("y=3x-11");
	}
}

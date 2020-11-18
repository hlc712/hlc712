#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	if(n<=100000&&n>50001){
		printf("程序员");
	}
	else if(n<=50000&&n>=12001)
		printf("；老板");
	else if(n<=12000&&n>=5001)
		printf("水电工工资");
	else if(n<=5000&&n>=3001)
		printf("普通清洁工");
	else if(n<=3000&&n>=1501)
		printf("普通打工人");
	else if(n<=1500&&n>=501)
		printf("贫困");
	else if(n<=500&&n>=0)
		printf("赤贫");
	else{
		printf("还有花呗没还，无法使用程序");
	}
 
}

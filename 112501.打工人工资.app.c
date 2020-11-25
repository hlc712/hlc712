#include<stdio.h>
void main()
{
	int money;
	scanf("%d",&money);
	if(money>=0&&money<=100)
	{
		printf("贫困打工人");

	}
	else if(money>101&&money<=1000)
	{
		printf("一般打工人");
	}
	else if(money>1001&&money<=20000)
	{
		printf("土豪打工人");
	}
	else
	{
		printf("输入错误，请重新输入！");
	}



}

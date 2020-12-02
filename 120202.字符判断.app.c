#include<stdio.h>
void main()
{ 
	char x;
	printf("******欢迎使用本程序******\n");
	scanf("%c",&x);
	switch(x){
	case 'a':printf("你再点击“上”键\n");break;
	case 's':printf("你再点击“下”键\n");break;
	case 'd':printf("你再点击“左”键\n");break;
	case 'w':printf("你再点击“右”键\n");break;
	default:printf("输入有误\n");
	}
}

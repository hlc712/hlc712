#include<stdio.h>
#include<string.h>
void main(){
	
	char s1[]="清华大学";
	char s2[]="北京大学";
    if(strcmp(s1,s2)==0){
		printf("相同 ");
	}
	else{
		printf("不相同 ");
	}
}

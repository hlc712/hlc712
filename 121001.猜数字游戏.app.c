	#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    printf("欢迎来到猜数字游戏\n");
    printf("请输入一个正确的中文口令，才能进入游戏\n");
    printf("请输入您的口令:");
    char a[20];
    char b[]="芝麻开门";
    int m;
    scanf("%s",&a);
    if(strcmp(a,b)==0)
    {
        printf("恭喜你答对了，可以进入此游戏！！！\n");
        printf("友情提示；请输入一个1-20的数字:");
        while(1)
        {
            scanf("%d",&m);
            if(m>15)
            {
                printf("你猜的太大了。\n");
                printf("请重新输入：");
            }
            else if(m<15)
            {
                printf("你猜的太小了。\n");
                printf("请重新输入：");
            }
            else
            {
                printf("恭喜你答对了，获得小礼品一份！\n");
                break;
            }
        }

    }
    else
    {
        printf("口令有误哦\n");
    }
    Sleep(2000);
    printf("*****游戏结束*****");
    return 0;
}

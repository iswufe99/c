/*
2019-11-5
测试输入输出
*/
#include <stdio.h>
#include <stdlib.h>//system使用需要库文件
int main(void){

    // system("chcp 65001");//切换终端的字符集为UTF-8
    system("cls");//清屏,为程序需显示做准备
 
    int i,j;
    char ch;
    printf("*********************************\n");
    printf("*特别程序安装提示,请选择你的参数*\n");
    printf("*********************************\n");
    printf("1.安装程序\n");
    printf("2.修复程序\n");
    printf("3.卸载程序\n");
    printf("4.提交bug给作者:iswufe99@foxmail.com\n");
    printf("请输入你要转换的数:");
    scanf("%d",&i);
    while ((ch=getchar())!='\n')//当第一次输入的内容后有非法字符时,第二次仍可以输入比如,123m
    {
        continue;
    }
    scanf("%d",&j);
    printf("i = %d\nj = %d",i,j);
    return 0;
}
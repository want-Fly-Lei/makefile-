#include<stdio.h>
#include"circle.h"
//#include"circle.c"//记住不要把.c文件包含进去不然报错
#include"cube.h"
//#include"cube.c"
#include"main.h"
CIRCLE CR;
CUBE CB;

int main(){
    //cube我知道是立方体的意思，但是为了简单，我把写成一个矩形
    init();
    put();
    return 0;
}

void init(){
    printf("请输入圆的半径\n");
    scanf("%lf",&CR.radius);
    printf("请分别输入矩形的长和宽\n");
    scanf("%d %d",&CB.length, &CB.width);
}

void put(){
    printf("圆的面积是：%.4lf，周长是：%.4lf\n",getAreaOfR(CR.radius), getPerimeterOfR(CR.radius));
    printf("矩形的面积是：%d，周长是：%d\n",getAreaOfC(CB.length,CB.width), getPerimeterOfC(CB.length,CB.width));
}
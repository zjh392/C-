#include <stdio.h>
#include <stdlib.h>

//打印华氏度与摄氏度对照表
int main()
{
    float fahr , celsius;
    float lower , upper , step;

    lower = 0;          //温度表下限
    upper = 200;        //温度表上限
    step = 20;          //步长

    printf("打印华氏度与摄氏度对照表\n");
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%f\t%f\n",fahr,celsius);
        fahr = fahr + step;
    }
}

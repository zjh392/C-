#include <stdio.h>
#include <stdlib.h>

//此程序与上个版本不同的是：将while结构更改为了for
int main()
{
    int celsisus , fahr;            //摄氏度，华氏度
    int lower , upper , step;       //温度计下上限，步长

    printf("此程序与上个版本不同的是：将while结构更改为了for");

    fahr = lower;
    for(fahr = 0 ;fahr <= 300;fahr = fahr + 20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr-32));
    return 0;
}

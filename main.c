#include <stdio.h>
#include <stdlib.h>

//��ӡ���϶������϶ȶ��ձ�
int main()
{
    float fahr , celsius;
    float lower , upper , step;

    lower = 0;          //�¶ȱ�����
    upper = 200;        //�¶ȱ�����
    step = 20;          //����

    printf("��ӡ���϶������϶ȶ��ձ�\n");
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("%f\t%f\n",fahr,celsius);
        fahr = fahr + step;
    }
}

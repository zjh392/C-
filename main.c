#include <stdio.h>
#include <stdlib.h>

//�˳������ϸ��汾��ͬ���ǣ���while�ṹ����Ϊ��for
int main()
{
    int celsisus , fahr;            //���϶ȣ����϶�
    int lower , upper , step;       //�¶ȼ������ޣ�����

    printf("�˳������ϸ��汾��ͬ���ǣ���while�ṹ����Ϊ��for");

    fahr = lower;
    for(fahr = 0 ;fahr <= 300;fahr = fahr + 20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr-32));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*��ʮ����ת��Ϊʮ������*/ 


void main(){
    int num[3];
    for(int i=0;i<3;i++){
        printf("please input the %drd num:  ",i);
        scanf("%d",&num[i]);
        printf("%d  =  0x%x\n",num[i],num[i]);
    }
    system("pause");
}
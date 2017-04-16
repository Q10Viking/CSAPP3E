#include <stdio.h>
#include <stdlib.h>

/*将十进制转换为十六进制*/ 


void main(){
    int num[3];
    for(int i=0;i<3;i++){
        printf("please input the %drd num:  ",i);
        scanf("%d",&num[i]);
        printf("%d  =  0x%x\n",num[i],num[i]);
    }
    system("pause");
}
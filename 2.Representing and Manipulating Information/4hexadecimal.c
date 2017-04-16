#include <stdio.h>
#include <stdlib.h>
/*
十六进制在代码中的表示,以及输入输出方式
*/
typedef unsigned char * byte_pointer;


void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(i=0;i<len;i++){
        printf("%.2x",start[i]);
    }
    printf("\n");
}

void show_int(int x){
    printf("show_int\n");
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x){
     printf("show_float\n");
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void* x){
    printf("show_pointer\n");
    //传送的是指向指针的地址。
    show_bytes((byte_pointer)&x,sizeof(void *));  
}

void test_show_bytes(int val){
    int ival = val;
    float  fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}



void main(){
//输入87654321或者0x87654321
     int  val = 0xf;  //在代码中表示必须得在前面加上0x
     printf("%d   %x\nplease input: ",val,val);
     scanf("%x",&val);
     //记得传入到函数强制类型转化
    show_bytes((byte_pointer)&val, sizeof(int));
    system("pause");
}

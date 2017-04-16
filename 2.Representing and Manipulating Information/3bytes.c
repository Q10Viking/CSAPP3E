#include <stdio.h>
#include <stdlib.h>
/*
��ӡ���������ֽڱ�ʾ
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
    //���͵���ָ��ָ��ĵ�ַ��
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
    /*
        12345��ʮ��������0x3039
    */

    test_show_bytes(12345);

     int  val = 0xf;
     scanf("%x",&val);
    printf("%d   %x",val,val);
    system("pause");
}

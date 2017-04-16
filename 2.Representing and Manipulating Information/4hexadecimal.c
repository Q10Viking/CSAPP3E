#include <stdio.h>
#include <stdlib.h>
/*
ʮ�������ڴ����еı�ʾ,�Լ����������ʽ
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
//����87654321����0x87654321
     int  val = 0xf;  //�ڴ����б�ʾ�������ǰ�����0x
     printf("%d   %x\nplease input: ",val,val);
     scanf("%x",&val);
     //�ǵô��뵽����ǿ������ת��
    show_bytes((byte_pointer)&val, sizeof(int));
    system("pause");
}

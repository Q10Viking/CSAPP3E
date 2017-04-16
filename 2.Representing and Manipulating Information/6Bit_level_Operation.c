#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char  a=0x41;
    unsigned short  b=0x00;
    int c=0x69;
    int d=0x55;
    //注意这个~运算
    // printf("~0x41 = 0x%.2x\n",~a);如果是这种形式，那么~的过程中会改变位数，输出0xffffffff
    printf("~0x41 = 0x%.2x\n",(unsigned char)~a);
    printf("~0x00 = 0x%.2x\n",(unsigned char)~b);
    printf("0x69 & 0x55 = 0x%.2x\n",c & d);
     printf("0x69 | 0x55 = 0x%.2x\n",c | d);
    system("pause");
    return 0;
}
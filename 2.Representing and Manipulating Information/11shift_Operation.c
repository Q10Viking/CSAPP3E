#include <stdio.h>
#include <stdlib.h>

int main(){
    int lval = 0xfedcba98;
    int aval=0xfedcba98;
    unsigned  uval=0xfedcba98;
    char x=0x95;
    unsigned char y=0x95;
    printf("lval << 32: %.8x\n",lval<<32);
    printf("aval>>36(Arithmetic operation): 0x%.8x\n",aval>>36);
    printf("uval>>40(logic operation): 0x%.8x\n",uval>>40);

   printf("--------------------------------------\n");
   printf("x>>4(Arithmetic operation): 0x%x\n",(unsigned char)(x>>4));   //(char)强转则不同
   printf("y>>4(logic operation): 0x%.2x\n",y>>4);
    system("pause");
    return 0;
}
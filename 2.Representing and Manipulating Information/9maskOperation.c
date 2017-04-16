#include <stdio.h>
#include <stdlib.h>
/*
    your code should work for any word size w>=8;
*/
int main(){
   int x = 0x87654321;
   //The least significant byte of x,with all other bits set to 0:
   printf(" [0x%.8x]\n",x & 0XFF);

   //All but the least significant byte of x complement,with the least significant byte left unchange.

   printf(" [0x%.8x]\n",x ^(~0xFF));
   //The least significant byte set to all 1s,and all other bytes of x left unchange.
   printf(" [0x%.8x]\n",x | 0xFF);
    system("pause");
    return 0;
}
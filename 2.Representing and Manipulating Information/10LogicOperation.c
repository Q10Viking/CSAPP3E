#include <stdlib.h>
#include <stdio.h>

int main(){
    int x=0x66;
    int y=0x39;
    printf("x & y : 0x%.2x\n",x & y);
    printf("x | y : 0x%.2x\n",x | y);
    printf("~x | ~y : 0x%.2x\n",(unsigned char)(~x | ~y));
    printf("x & !y : 0x%.2x\n",x & !y);

    printf("x && y : 0x%.2x\n",x && y);
    printf("x || y : 0x%.2x\n",x || y);
    printf("!x || !y : 0x%.2x\n",!x || !y);
    printf("x && ~y : 0x%.2x\n",x && ~y);
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


/*Boolean ring*/
//We don't need a third location to temporarily store one value when we are moving the other.
void inplace_swap(int *x, int *y){
    *x = *y ^ *x;
    *y = *x ^ *y;
    *x = *x ^ *y;
}


int main(){
    int x=20,y=30;
    inplace_swap(&x,&y);
    printf("x = %d\ny = %d\n",x,y);
    system("pause");
    return 0;
}
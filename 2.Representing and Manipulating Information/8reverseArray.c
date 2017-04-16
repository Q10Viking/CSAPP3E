#include <stdio.h>
#include <stdlib.h>


/*Boolean ring*/
//We don't need a third location to temporarily store one value when we are moving the other.

/*
void inplace_swap(int *x, int *y){
    if(x == y)    //如果没有这个语句，那么当数组的长度为奇数时，中间的元素会是0，
        return;
    else{
         *x = *y ^ *x;
          *y = *x ^ *y;
          *x = *x ^ *y;
    }
}


void reverse_arrary(int arr[], int cnt){
    int first,last;
    for(first = 0,last = cnt-1;first <= last; first++,last--)
        inplace_swap(&arr[first], &arr[last]);
}
*/
//更优化的处理,直接将first<=last,改为first<last
void inplace_swap(int *x, int *y){ 
         *x = *y ^ *x;
          *y = *x ^ *y;
          *x = *x ^ *y;
}

void reverse_arrary(int arr[], int cnt){
    int first,last;
    for(first = 0,last = cnt-1;first < last; first++,last--)
        inplace_swap(&arr[first], &arr[last]);
}

int main(){
    int i;
    int arr[]={1,2,3,4,5};
    //计算数组大小.
    int length = sizeof(arr)/sizeof(int);
    reverse_arrary(arr,length);
    for(i=0;i<length;i++)
        printf("arr[%d] = %d\n",i,arr[i]);
    system("pause");
    return 0;
}
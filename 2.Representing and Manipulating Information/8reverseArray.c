#include <stdio.h>
#include <stdlib.h>


/*Boolean ring*/
//We don't need a third location to temporarily store one value when we are moving the other.

/*
void inplace_swap(int *x, int *y){
    if(x == y)    //���û�������䣬��ô������ĳ���Ϊ����ʱ���м��Ԫ�ػ���0��
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
//���Ż��Ĵ���,ֱ�ӽ�first<=last,��Ϊfirst<last
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
    //���������С.
    int length = sizeof(arr)/sizeof(int);
    reverse_arrary(arr,length);
    for(i=0;i<length;i++)
        printf("arr[%d] = %d\n",i,arr[i]);
    system("pause");
    return 0;
}
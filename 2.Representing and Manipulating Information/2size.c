#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*C数据类型的典型大小*/ 


void main(){
    printf("char : %d\n",sizeof(char));
    printf("unsigned char : %d\n",sizeof(unsigned char));
    printf("\n");
    printf("short : %d\n",sizeof(short));
    printf("unsigned short: %d\n",sizeof(unsigned short));
    printf("\n");
    printf("int : %d\n",sizeof(int));
    printf("unsigned : %d\n",sizeof(unsigned));
    printf("\n");
    printf("long : %d\n",sizeof(long));
    printf("long long : %d \n",sizeof(long long));
    printf("unsigned long : %d\n",sizeof(unsigned long));
    printf("unsinged long long : %d \n",sizeof(unsigned long long));
    printf("\n");
    printf("int32_t : %d\n",sizeof(int32_t));
    printf("uint32_t : %d\n",sizeof(uint32_t));
    printf("\n");
    printf("int64_t : %d\n",sizeof(int64_t));
    printf("uint64_t : %d\n",sizeof(uint64_t));
    printf("\n");
    printf("char * : %d\n",sizeof(char *));
    printf("unsigned char * : %d\n",sizeof(unsigned char *));
    printf("float : %d\n",sizeof(float));
    printf("double : %d\n",sizeof(double));

    printf("size_t : %d\n",sizeof(size_t));
    system("pause");
}
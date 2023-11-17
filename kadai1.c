#include<stdio.h>

int main(void) {
    //1
    printf("Welcome to C Programing!\n");
    
    //2
    int x, y, z;
    x = 10;
    y = 2 * x;
    z = x + y;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    
    //3
    int price = 500;
    printf("price : %.2f\n",price*1.1);

    return 0;
}
#include<stdio.h>

int main(){
    int e;
    printf("eの値を入力して下さい : ");
    scanf("%d",&e);

    if(e < 10){
        printf("eは10未満です\n");
    }

    return 0;
}
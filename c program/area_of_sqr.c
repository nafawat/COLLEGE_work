#include <stdio.h>

//area of sqr
int area_sqr1(){
    int size; int square;
    printf("enter size for area of square :");
    scanf("%d",&size);
    square = size * size;
    printf("size : %d", square);
}

int main(){
    area_sqr1();
}
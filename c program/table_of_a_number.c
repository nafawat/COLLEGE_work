#include<stdio.h>
 int main(){
    int num ;
    printf("enter your number :");
    scanf ("%d",&num);

    for(int i =1 ; i <=10 ; i++){
        printf("%d x %d = %d \n",num , i , num*i);
    }
 }
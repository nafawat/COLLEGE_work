#include <stdio.h>
int main(){
    int num ; int fact = 1;
    printf("enter your number :");
    scanf("%d",&num);

    for(int i =num ; i >=1 ; i--){
        fact = fact * i;
    }
    
     printf("your factorial for %d is : %d",num , fact );

     return 0;
}
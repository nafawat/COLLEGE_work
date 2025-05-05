# include <stdio.h>

//sum of two number
int sum1(){
    int a ; int b ; int c ;
    printf("enter your 1st number : ");
    scanf("%d",&a);
    printf("enter your 2nd number : ");
    scanf("%d",&b);
    c = a + b ;
    printf("your sum is : %d \n", c);
    return 0;
}

int main(){
    sum1();
}
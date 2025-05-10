#include <stdio.h>
int main(){
    int n; int first = 0 ; int second = 1; int next ;
     printf("Enter the number of fibonachi output : " );
     scanf("%d",&n);
     printf("Fibonacci Series: ");

     for(int i = 1 ; i<=n ;i ++){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
     }
     return 0;
}

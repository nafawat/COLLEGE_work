#include <stdio.h>
int main (){
    int n ; int count = 0;
    printf("enter your number : ");
    scanf("%d",&n);
    if(n<=1){
        printf("the number is not prime");
    }
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2)
    printf("the number %d is prime !!!!",n);
    else
    printf("the number %d is not prime ",n);
return 0;
}
# include <stdio.h>
int main(){
    int a ; int b ; int tmp;
    printf("enter your first number : " );
    scanf("%d",&a );
    printf("enter your second number: ");
    scanf("%d",&b);
    tmp = a;
    a = b;
    b = tmp;
    printf("%d\t%d",a,b);
}
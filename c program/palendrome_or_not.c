# include <stdio.h>
int main(){
    int num; int org; int rev = 0;int rem;
    printf("enter your number to chech if palendrome or not : ");
    scanf("%d",&num);

    org = num;

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem ;
        num /=10;}

    if (org == rev){
        printf("%d the number is palendrome", org);}
    else{
        printf("%d the number is not palendrome", org);
    }
}
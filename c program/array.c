#include <stdio.h>
int main(){
int arr[10];
int i;
printf("enter your number in array : ");
for(i=0;i<10;i++){
    printf("your value %d :",i +1);
    scanf("%d",&arr[i]);
}
printf("your values are :\n");
for(i=0;i<10;i++){
    printf("%d\n",arr[i]);
}
return 0;
}

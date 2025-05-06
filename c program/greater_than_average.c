#include <stdio.h>


//print all the number greater than average
int main(){
    int arr[5]; int sum=0; float avg ;
    printf("please enter 5 number : \n ");
    for(int i = 0; i<5 ; i++){
        scanf("%d",& arr[i]);
        sum+=arr[i];
    }
    
    avg = sum / 5.0;
    printf ("average = %.2f \n", avg);

    printf("number greater than average are : \n");
    for(int i=0 ; i<5 ; i++){
        if (arr[i] > avg){
            printf("%d", arr[i]);
            printf("\n");
        }
    }
}
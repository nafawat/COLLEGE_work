#include <stdio.h>
#include <stdlib.h>

int linear_s(int arr[], int a){
    int x,f;
    printf("enter the value u want to search :");
    scanf("%d",&x);

    for(int i = 0; i<a; i++){
        if(arr[i]==x){
            printf("value %d found at index %d.\n",x,i);
            f++;
            break;
        }
    }
    if(!f){
        printf("value %d not found.\n",x);
    }

}

int main(){
int a,i;

printf("enter the size of array :");
scanf("%d",&a);

int arr[a];

for(i=0;i<a;i++){
    printf("enter the value in the array :");
    scanf("%d",&arr[i]);
}

linear_s(arr,a);
}
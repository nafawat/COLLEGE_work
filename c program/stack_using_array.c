# include <stdio.h>
# define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE -1){
        printf("stack overflow \n");
    }
    else{
        stack[top++]= value;
        printf("%d pushed in the stack \n",value);
    }
}
void pop(){
    if ( top == -1){
        printf("stack underflow \n");
    }
    else{
        printf("%d popped from stack \n ", stack[top--]);
    }
}

void display(){
    if(top == -1){
        printf("stack is empty \n");
    }
    else{
        printf("stack : \n");
        for(int i =0; i<=top ; i++){
            printf("%d",stack[i]);
            printf("\n");
        }
        
    }
}

int main(){
    push(30);
    push(20);
    push(30);
    push(20);
    push(30);
    push(20);
    pop();
    display();
    return 0;
}
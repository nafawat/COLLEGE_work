#include <iostream>
using namespace std;

#define max 100

class stack{
private:
    int arr[max];
    int top;

public:
    stack(){
        top = -1;
    }

    void push(int x){
        if(top>=max){
            cout << "stack overflow \n" ;
            return;
        }

        arr[++top]=x;
        cout << x << "inserted into stack\n";
    }

    void pop(){
        if(top<0){
            cout << "stack underflow\n";
            return;
        }
        cout << arr[--top] << "poped from stack\n";
    }

    void peek(){
        if(top < 0){
            cout << "stack is empty\n";
            return ;
        }
        cout << arr[top];
    }

    bool isempty(){
        return top < 0;
    }
    
    void display(){
        if(isempty()){
            cout << "stack is empty\n";
        }

        cout << "Stack elements (top to bottom): \n";
        for(int i = top;i>=0; i-- ){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " ; s.peek() ; "\n" ; 

    s.pop();
    s.display();

    cout << "Is stack empty? " << (s.isempty() ? "Yes" : "No") << endl;

    return 0;
}
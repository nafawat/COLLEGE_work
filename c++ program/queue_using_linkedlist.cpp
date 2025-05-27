#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    node* head;
    node* tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        node* newnode = new node(data);
        if(isempty()){
            head = tail = newnode;
        }else{
            tail -> next =newnode;
            tail = newnode;
        }
        
    }

    void pop(){
        if(isempty()){
            cout << "queue is empty\n";
        }else{
            node* temp = head;
            head = head -> next;
            delete temp;
        }

    }

    int front(){
        if(isempty()){
            cout << "queue is empty\n"; 
        }
        return head -> data;
    }

    bool isempty(){
        return head == NULL;
    }
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(!q.isempty()){
        cout << q.front() << " ";
        q.pop();
    }
}
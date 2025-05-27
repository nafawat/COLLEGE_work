#include <iostream>
using namespace std;

class circularqueue{
    int* arr;
    int currsize , cap;
    int f=0 , r=-1;
public:
    circularqueue(int size){
        cap = size;
        arr = new int[cap];
        f=0;
        r=-1;
    }

bool empty(){
    return currsize == 0;
}

void push(int data){
    if(currsize == cap){
        cout << "cq is full";
        return;
    }
    r =(r+1)%cap;
    arr[r]= data;
    currsize++;
    }

void pop(){
    if(empty()){
        cout << "cq is empty";        
    }
    f = (f+1)%cap;
    currsize--;
    }

int front(){
    if (empty()){
        cout << "cq is empty \n";
        return -1;
    }
    return arr[f];
    }

void printarr(){
    for(int i=0; i<cap; i++){
       cout << arr[i] << " "; 
    }
    cout << endl;
}
};

int main(){

circularqueue cq(3);

cq.push(1);
cq.push(2);
cq.push(3);
cq.pop();
cq.push(4);
cq.printarr();
return 0;
}
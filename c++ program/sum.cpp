#include <iostream>
using namespace std;

int sum(int a, int b){
int add = a+b;
cout << "your value after addition is : " << add << endl ;
return add;
}

int main(){
    int x , y;
    cout << "enter your first number :";
    cin >> x;
    cout << "enter your second number :";
    cin >> y;

    sum(x,y);
    return 0;
}
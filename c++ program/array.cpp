#include <iostream>
using namespace std;

const int a = 5 ;
int arr[a];
int arr_size = 0 ;

void dis_arr(){
    if(arr_size==0){
        cout << "array is empty :("<<endl;
        return ;
    }
    cout << "array elements:";
    for (int i = 0 ; i < arr_size;i++){
        cout<< arr[i] ;
        if (i != arr_size -1 ) cout << ",";
    }
    cout << endl;
}

void arr_ins(){
    int val;

    if(arr_size>=a){
        cout << "array is full\n";
        dis_arr();
        return;
    }

    while (arr_size < a){
        cout << "enter element to insert : ";
        cin >> val;

        arr[arr_size]=val;
        arr_size++;}
}
int main(){
    while (arr_size <5 ){
    arr_ins();}

    dis_arr();
}
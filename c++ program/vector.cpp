#include <iostream>
#include <vector>
using namespace std;

void vector_(){
    vector<int> vec;
    vec.push_back(11);
    vec.push_back(22);
    vec.push_back(33);
    vec.push_back(44);

    for(int i=0;i < vec.size(); i++){
        cout << vec.at(i) <<"\n";}

    cout << "\nafter poping the last value the size is :";
    vec.pop_back();

    cout << vec.size() << "\n";
    cout << "front of array is:";
    cout << vec.front() << "\n";
    cout <<"last of array is:" ;
    cout << vec.back() << "\n";
}

int main(){
    vector_();
}
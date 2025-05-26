#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout <<"top element :" <<st.top() << endl;
    st.pop();
    cout <<"new top element after :" <<st.top() << endl;
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.size() << endl;

    // remove
    st.pop();
    //st.pop();

    // top element

    cout << st.top() << endl;

    // check empty
    if(st.empty()){
        cout << " Stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }
    return 0;
}
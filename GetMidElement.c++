#include<iostream>
#include<stack>
using namespace std;

void Solve(stack<int> &st , int &pos , int &ans){
    // base case
    if (pos == 1){
        ans = st.top();
        //st.top();
        return;
    }
    // 1 case hum solve karenge 
    pos--;
    int temp = st.top();
    st.pop();
    // recursion
    Solve(st , pos , ans);
    // backtrack
    st.push(temp);
}


int getMiddleElement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
     cout<< "Stack is Empty" << endl;
     return -1;
    }
    // odd
    int pos = 0;
    if(size & 1){
       pos = size/2 + 1;
    }
    else{
        pos = size/2;
    }

    int ans  = -1;
    Solve(st , pos , ans);
    return ans;
}

int main(){

    stack<int> st;
   // st.push(10);
    //st.push(30);
    // st.push(18);
    // st.push(100);
    // st.push(43);
    // st.push(34);
    int mid = getMiddleElement(st);
    cout << "Mid element is:=  " << mid << endl;
    return 0;
}
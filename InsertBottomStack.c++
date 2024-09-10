#include<iostream>
#include<stack>
using namespace std;



  void InsertBottomStack(stack<int> &st , int &bottom){
    int pos = 0;
    int size = st.size();
    if(st.empty()){
       // cout << "Stack is Empty" << endl;
       st.push(bottom);
       return;
    }
    int temp = st.top();
    st.pop();
    InsertBottomStack(st , bottom);
     // backtrack
     st.push(temp);
   
  }

  void reverseStack(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);

    // backtracking
    InsertBottomStack(st , temp);

  }
   void sortedStack(stack<int> &st , int element){
      // base case
      if(st.empty() || element > st.top()){
        st.push(element);
        return;
      }

      int temp = st.top();
      st.pop();
      sortedStack(st , element);
      // backtracking
      st.push(temp);
   }

  void notSortedStack(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }
    // 1 ham solve karenge baki recursion sambhal lega
    int temp = st.top();
    st.pop();
    notSortedStack(st);
    // backtracking
    sortedStack(st,temp);
  }
int main(){

    stack<int> st;
    st.push(2);
    st.push(99);
    st.push(1000);
    st.push(350);
    st.push(10);
    //int bottom = 23;

    // InsertBottomStack(st , bottom);
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();

    // cout << "Stack size is :  " << st.size() << endl;
    // cout << "Top Eement is :  " << st.top() << endl;
    // Without reverse
    // 100 35 30 20
 // 10 350 99 2
 notSortedStack(st);
   // reverseStack(st);
   //cout << "With reverse" << endl;

   //sortedStack(st , 200);
    // Not sorted stack

    while(!st.empty()){
        cout<< " " << st.top();
        st.pop();
    }

}
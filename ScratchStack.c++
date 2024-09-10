#include<iostream>
using namespace std;

class Stack{
    public:
  int *arr;
  int size;
  int top;
  Stack(int size){
    this->arr = new int(size);
    this->size = size;
    this->top = -1;
  }
  void push(int data){
    if(top == size-1){
        cout << "Stack is Overflow" << endl;
    }
    else{
       top++;
       arr[top] = data;
    }
    
  }
  // remove data
  void pop(){

    if(top == -1){
        cout << "stack is Underflow" << endl;
    }
    else{
        arr[top] = 0;
        top--;
    }
   
  }
  bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
  }
  // element present in stack 
  int getSize(){
    
         return top + 1;
   
  }
  // top element find out;

  int getTop(){
    if(top == -1){
        cout << "Stack is Empty" << endl;
        return -1;
    }
    else{
       return arr[top];
    }
    
  } 

  // print

  void print(){
    cout<< endl;
    cout<< "Top: " << top << endl;
    cout << "Top Element: " << getTop() << endl;
    cout << "Stack: ";
    for(int i = 0; i < getSize(); i++){
        cout << arr[i] << " ";
       // cout<<endl;
    }
    cout << endl;
  }

};

int main(){
    Stack st(8);

    //push
    st.push(30);
    //st.print();

    st.push(20);
    //st.print();

    st.push(10);
   // st.print();

    // cout << "top element: " <<st.getTop() << endl;
    // cout << "size " << st.getSize() << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    // st.push(10);
    // st.print();

    // st.push(10);
    // st.print();
    // st.push(10);
    // st.print();
    // st.push(10);
    // st.print();
    // st.push(10);
    // st.print();
    // st.push(10);
    // st.print();
    // st.push(10);
    // st.print();


    // st.pop();
    // st.print();
    // st.pop();
    // st.print();
    // st.pop();
    // st.print();

    return 0;
}
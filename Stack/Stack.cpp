//
// Created by Sumit Suman on 14-08-2021.
//

#include<iostream>
using namespace std;
#define n 100
class stack{

    int *arr;
    int top;

public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){

        if(top == n - 1){
            cout << "Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){

        if(top == -1){
            cout << "No element to pop" << endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top == -1){
            cout << "No element to pop" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }

};

int main()
{
    stack st;
    st.push(1); //1 is added on the bottom of stack
    st.push(3);//3 is added on top of 2
    st.push(5);//5 is added on the top of stack
    cout << st.Top()<<endl;
    st.pop();//5 is removed
    st.pop();//3 is removed
    cout << st.empty()<<endl;//return 0 for False and 1 for true if stack is empty or not

    return 0;
}

//
// Created by Sumit Suman on 18-08-2021.
//

#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){

    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        string w = "";
        while(s[i] != ' ' && i < s.length()){
            w+=s[i];
            i++;
        }
        st.push(w);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }cout<<endl;
}

int main()
{
    string s = "Hey!! How are you??";
    reverseSentence(s);
    return 0;
}


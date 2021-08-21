//
// Created by Sumit Suman on 21-08-2021.
//

#include<iostream>
#include<vector>
using namespace std;

template <class V>
void display(vector<V> &v) {
    for(int i:v) {
        cout << i << " ";
    }cout << endl;
}

int main(){
    vector<int> v;

    vector<int> a(5,9);
    cout << "Printing a " << endl;
    display(a);

    cout << "Capacity--> "<<v.capacity()<<endl;
    v.push_back(5);
    cout << "Capacity--> "<<v.capacity()<<endl;
    v.push_back(2);
    cout << "Capacity--> "<<v.capacity()<<endl;
    v.push_back(3);
    cout << "Capacity--> "<<v.capacity()<<endl;
    cout << "Size--> "<<v.size()<<endl;

    cout << "Element at 2nd index--> " <<v.at(2)<<endl;

    cout << "front--> " << v.front()<<endl;
    cout << "back--> " << v.back() << endl;

    auto iter = v.begin();
    v.insert(iter, 2,7);


    cout << "before pop" << endl;
    display(v);

    v.pop_back();
    cout << "after pop" << endl;
    display(v);

    cout << "Before clear size--> " << v.size() << endl;
    v.clear();
    cout << "After clear size--> " << v.size() << endl;

    return 0;
}


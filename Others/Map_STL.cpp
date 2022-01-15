//
// Created by Sumit on 15/01/22.
//

#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;
    m[1] = "C++";
    m[12] = "Python";
    m[3] = "Java";
    m.insert({{7, "Obj-C"}, {9,"C"}});
    cout << "before erase" << endl;
    for(auto i:m){
        cout << i.first <<" " <<i.second<< endl;
    }
    cout << "finding 13 -> "<< m.count(13)<<endl;
    //cout << "Size: " << marksMap.size() << endl;
    m.erase(7);
    cout << "after erase" << endl;
    for(auto i:m){
        cout << i.first <<" " <<i.second<< endl;
    }

    auto it = m.find(9);
    for(auto i = it; i!=m.end();i++){
        cout << (*i).first<<endl;
    }

    return 0;
}
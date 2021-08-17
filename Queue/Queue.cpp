//
// Created by Sumit Suman on 17-08-2021.
//

#include<iostream>
using namespace std;
#define n 100

class queue{
    int* arr;
    int front;
    int back;

public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x){

        if(back == n - 1){
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void dequeue(){

        if(front == -1 || front > back){
            cout << "No elements in queue" << endl;
            return;
        }

        front++;
    }

    int peek(){
        if(front == -1 || front > back){
            cout << "No elements in queue" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front == -1 || front > back){
            return true;
        }

        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.peek() << endl;
    q.dequeue();

    cout << q.empty() << endl;

    cout << q.peek() << endl;


    return 0;
}

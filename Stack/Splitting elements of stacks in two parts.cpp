#include<iostream>
using namespace std;

class Stack
{
public:

    int *arr;
    int top;
    int Size;

    Stack(int n)
    {
        arr=new int[n];
        Size=n;
        top=-1;
    }

    void PushElement(int value)
    {
        if(top==Size-1)
        {
            cout<<"\nStack Overflow";
            return;
        }
        top++;
        arr[top]=value;
    }

    void PopElement()
    {
        if(top==-1)
            cout<<"\nStack is Empty.";
        top--;
    }

    int Top()
    {
        if(top==-1)
           cout<<"\nStack is Empty.";
        else
            return arr[top];
    }

    bool IsEmpty()
    {
        if(top==-1)
            return true;
        return false;
    }

};

int main()
{
    int n,value;
    cout<<"Enter number of elements you want to add: ";
    cin>>n;

    Stack s(n);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Value of Element: ";
        cin>>value;
        s.PushElement(value);
    }

    Stack s1(n),s2(n);

    cout<<"\ns2:";
    for(int i=0;i<n/2;i++)
    {
        cout<<s.Top()<<" ";
        s2.PushElement(s.Top());
        s.PopElement();
    }
    cout<<"\nS1: ";
    while(!s.IsEmpty())
    {
        cout<<s.Top()<<" ";
        s1.PushElement(s.Top());
        s.PopElement();
    }
    cout<<endl;
    while(!s2.IsEmpty())
    {
        cout<<s2.Top()<<" ";
        s1.PushElement(s2.Top());
        s2.PopElement();
    }

    cout<<"\nFinal Stack: ";
    while(!s1.IsEmpty())
    {
        cout<<s1.Top()<<" ";
        s1.PopElement();
    }




}

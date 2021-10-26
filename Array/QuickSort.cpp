

#include<iostream>
using namespace std;




int pivotKey(int input[] , int si , int ei){
  int m=input[si];
  int count=0;
  for(int i=si+1;i<=ei;i++){
    if(m>input[i]){
      count++;
    }
  }
  int temp = input[si];
  input[si] = input[count+si];
  input[count+si] = temp;
  
  int i=si;
  int j=ei;
  while(i<j){
    if(input[i]>=m && input[j]<m){
  int temp = input[i];
  input[i] = input[j];
  input[j] = temp;
    i++;
    j--;
    }
    else if(input[i]<m){
    i++;
    }
    else if(input[j]>=m){
    j--;
    }
  }
  
  return count+si;
}

void helper(int input[] , int si , int ei){
if(si>ei){
  return;
}
int partition = pivotKey(input,si,ei);
helper(input , si , partition -1 );
helper(input , partition+1 , ei );  
}


void quickSort(int input[], int size) {
    helper(input,0,size-1);
}



int main(){

    int n;
    cin>>n;

    int* input = new int[n];

    for(int i=0 ; i<n ; i++){
        cin>>input[i];
    }

    quickSort(input , n);

    for(int i=0 ; i<n ; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

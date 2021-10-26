

#include<iostream>
using namespace std;





class Partition {
    public:

        int left;
        int right;

};

void swap(int* array, int position1, int position2) {
    if (position1 != position2) {
        int temp = array[position1];
        array[position1] = array[position2];
        array[position2] = temp;
    }
}


Partition partition(int* input, int begin, int end) {
    int lt = begin, current = begin, gt = end;
    int partitioningValue = input[begin];

    while (current <= gt) {
        if(input[current] > partitioningValue){
            swap(input, current, gt--);
        }else if(input[current] < partitioningValue){
            swap(input, current++, lt++);
        }else{
            current++;
        }
    }
    Partition p;
    p.left = lt;
    p.right = gt;
    return p;
}


void quicksort(int* input, int begin, int end) {
    if (end <= begin)
        return;

    Partition middlePartition = partition(input, begin, end);

    quicksort(input, begin, middlePartition.left - 1);
    quicksort(input, middlePartition.right + 1, end);
}


void quicksort(int* input , int size){
    quicksort(input , 0 , size-1);
}






int main(){

    int n;
    cin>>n;

    int* input = new int[n];

    for(int i=0 ; i<n ; i++){
        cin>>input[i];
    }

    quicksort(input , n);

    for(int i=0 ; i<n ; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

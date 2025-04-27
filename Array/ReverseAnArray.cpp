// Reversing the array
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int left=0, right=size-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    cout<<"\nArray after reversing is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={3,2,5,41,6};
    int size =5;
    cout<<"Array before reverse: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr, size); // Calling function
    return 0;
}
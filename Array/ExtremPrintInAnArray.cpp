// // Extreme Print in an array.
#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int left=0, right=size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left];
        }
        else{
            cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}

int main(){
    int arr[5]={3,2,5,41,6};
    int size =5;
    cout<<"Array before reverse: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    extremePrint(arr, size); // Calling function
    return 0;
}
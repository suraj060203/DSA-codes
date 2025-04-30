#include<iostream>
using namespace std;

void printingPairs(int arr[], int size){
    for(int i=0; i<size; i++){
        // cout<<"("<<arr[i]<<",";
        for(int j=0; j<size; j++){
            cout<<"("<<arr[j]<<","<<arr[i]<<")";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {10,20,30};
    int size =3;
    printingPairs(arr, size);
    return 0;
}
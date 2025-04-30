#include<iostream>
using namespace std;

int getUnique(int arr[], int size){
    int answer=0;
    for(int i=0; i<size; i++){
        answer=answer^arr[i];
    }
    return answer;
}

int main(){
    int arr[]={2,10,4,10,2,13,15,13,15};
    int size =9;
    int answer= getUnique(arr, size);
    cout<<"Unique Element is: "<<answer;
    return 0;
}
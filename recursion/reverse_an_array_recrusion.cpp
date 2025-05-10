#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"reversed array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int l, int r){
    if(l<r){
        swap(arr[l], arr[r]);
        reverseArray(arr, l+1, r-1);
    }
}

int main(){
    int n = 5;
    int arr[] = {4,5,2,1,3};
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
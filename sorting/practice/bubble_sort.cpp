#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    bubble_sort(arr, n);

    for(int j = 0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
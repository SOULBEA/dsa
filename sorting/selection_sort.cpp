#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<=arr[i]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"enter your array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
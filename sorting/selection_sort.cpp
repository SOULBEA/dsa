#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            // swap(arr[min], arr[j]);
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        // swap(arr[min], arr[j]);
        // int temp = arr[min];
        // arr[min] = arr[j];
        // arr[j] = temp;
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

    selection_sort(arr, n);

    for(int j = 0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
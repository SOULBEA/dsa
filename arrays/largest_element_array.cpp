#include<iostream>
using namespace std;


int largest_number(int arr[], int n){
    
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"enter a numbe: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x = largest_number(arr, n);
    cout<<"largest element: "<<x<<endl;

    return 0;
}
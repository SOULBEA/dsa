#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"enter your array numbers: "<<endl;
    for(int i = 1; i<=n;i++){
        cin>>arr[i];
    }
    int s = second_largest(arr, n);
    cout<<"second largest = "<<s<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int counts(int num, int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
}


int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"enter your array";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter a number to find how many time it repeted iteself";
    cin>>num;
    cout<<counts(num, arr, n)<<endl;
    return 0;
}
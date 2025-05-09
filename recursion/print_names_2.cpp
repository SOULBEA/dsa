#include<iostream>
using namespace std;

void print_names(int i, int n){
    if(i>n){
        return;
    }
    cout<<"arpit"<<endl;
    print_names(i+1, n);
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    print_names(1, n);
    return 0;
}
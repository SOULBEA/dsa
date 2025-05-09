#include<iostream>
using namespace std;

void print_nums(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    print_nums(i+1, n);
}

int main(){
    int n;
    cout<<"enter the range: ";
    cin>>n;
    print_nums(1, n);
    return 0;
}
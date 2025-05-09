#include<iostream>
using namespace std;

void print_n_to_1(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    print_n_to_1(i-1, n);
}

int main(){
    int n;
    cout<<"enter a range: ";
    cin>>n;
    print_n_to_1(n, n);
    return 0;
}
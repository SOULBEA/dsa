#include<iostream>
using namespace std;

void sum_of_n_terms(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sum_of_n_terms(i-1, sum+i);
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    sum_of_n_terms(n, 0);
    return 0;
}
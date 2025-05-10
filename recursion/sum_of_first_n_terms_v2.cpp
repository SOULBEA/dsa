#include<iostream>
using namespace std;

int sum_of_n_terms(int n){
    if(n==0){
        return 0;
    }
    return n+sum_of_n_terms(n-1);
}

int main(){
    int n;
    cout<<"etner a number: ";
    cin>>n;
    cout<<sum_of_n_terms(n)<<endl;
    return 0;
}
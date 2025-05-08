#include<iostream>
#include<string>
using namespace std;

int count = 0;
void print_names(string n){
    if(count == 3){
        return;
    }
    cout<<n<<" ";
    count++;
    print_names(n);
}

int main(){
    string n;
    cout<<"enter a name: ";
    cin>>n;
    print_names(n);
    return 0;
}
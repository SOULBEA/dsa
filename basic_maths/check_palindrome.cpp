#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int rev = 0;
    int dup = n;
    while(n>0){
        int lastdigit = n%10;
        rev = (rev*10)+lastdigit;
        n = n/10;
    }
    if (dup == rev)
    {
        cout<<"ture";
    }
    else
    {
        cout<<"false";
    }
    
    return 0;
}
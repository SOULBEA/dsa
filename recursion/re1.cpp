#include<iostream>
using namespace std;

void printinfi(int n){
  // printing number till infinity
  cout<<n<<endl;
  printinfi(n);
}
int count = 0;
void base(){
  //int count = 0;
  if(count == 5)
    return;
    cout<<count<<endl;
    count++;
    base();
}

int main(){
  //int n;
  //cout<<"please enter your number: ";
  //cin>>n;
  //printinfi(n);
  base();
  return 0;
}

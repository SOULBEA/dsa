#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter range to calculate average: ";
  cin>>n;
  int sum = 0;
  int i = 1;
  while (i<=n) {
    int no;
    cout<<"please enter your resepective number: ";
    cin>>no;
    sum = sum+no;
    i++;
    
  }
  cout<<"average = "<<sum/n<<endl;
  return 0;
}

#include <iostream>
using namespace std;

int main(){
  float rate, principle, time;
  cout<<"please enter rate: ";
  cin>>rate;

  cout<<"please enter principle: ";
  cin>>principle;

  cout<<"please enter time: ";
  cin>>time;

  float si = (rate*principle*time)/100.0;
  cout<<"the simple intrest is = "<<si;
  return 0;
}

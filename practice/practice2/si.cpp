#include <iostream>
using namespace std;

int main(){
  float rate, time, principle, si;
  cout<<"please enter rate: ";
  cin>>rate;
  cout<<"please enter time duration: ";
  cin>>time;
  cout<<"please enter principle rate: ";
  cin>>principle;

  si = (rate*time*principle)/100;
  cout<<"the rate of interest is = "<<si;
  return 0;
}

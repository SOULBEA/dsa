#include<iostream>
using namespace std;

int main(){
  float rate, time, principle;
  cout<<"please enter rate: ";
  cin>>rate;
  cout<<"please enter time: ";
  cin>>time;
  cout<<"please enter principle";
  cin>>principle;

  float si = (rate*time*principle)/100;
  cout<<"the simple interest is : "<<si;
  return 0;
}

#include <iostream> 
using namespace std;
int main() {
int a;
cout<<"Enter the value of a"<<endl;
cin>>a;

if(a>0) {
cout<<"A IS POSITIVE"<<endl;
}
else {
  if(a<0)  {
    cout<<"A IS NEGATIVE"<<endl;
}
else {
    cout<<"a is 0"<<endl;
}
}
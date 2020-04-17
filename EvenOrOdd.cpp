#include<iostream>
using namespace std;
class check{
  private:
    int x;
  public:
    void read(){
    cout<<"Enter number :";
    cin>>x;
    };

void test(){
  if(x%2==0)cout<<"even\n";
  else cout<<"odd\n";}
};

int main(){
  check x;
  x.read();
  x.test();
  return 0;
}

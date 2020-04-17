#include<iostream>
using namespace std;
class number {
  private:
    int x,y;
  public:
    void read(){
      cin>>x>>y;
    }

  int mult(){
    return(x*y);
  }
 };

int main(){
  number n;
  n.read();
  cout<<n.mult()<<endl;
  return 0;
}

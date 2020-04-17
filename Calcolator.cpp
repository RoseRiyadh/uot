#include<iostream>
using namespace std;
class opreation {
  private:
    int a,b;
  public:
    void find_oper(){
      char op;
      cout<<"Enter number 1:";
      cin>>a;
      cout<<"Enter number 2:";
      cin>>b;
      cout<<"Enter Operation ('+','-','*','/'):";
      cin>>op;
      switch(op){
        case '+':
          cout<<"a"<<op<<"b="<<a+b<<endl;
          break;
        case '-':
          cout<<"a"<<op<<"b="<<a-b<<endl;
          break;
        case '*':
          cout<<"a"<<op<<"b="<<a*b<<endl;
          break;
        case '/':
          cout<<"a"<<op<<"b="<<(float)(a/b)<<endl;
          break;
        default:
          cout<<"invalid input..\n";
        }
    } 
  };
int main(){
  opreation op;
  op.find_oper();
  return 0;
}

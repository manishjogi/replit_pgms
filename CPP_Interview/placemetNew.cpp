#include<iostream>
using namespace std;

class A
{
  public:
  int x;
  A(){}
};

class B
{
  public:
  int x;
  B()=default;
};

int main()
{
  cout<<sizeof(A)<<endl;
  char* memory=new char[5*sizeof(A)];
  A* obj1=new(&memory[0])A;
  cout<<obj1->x<<endl;
  B* obj2=new(&memory[4])B;
  cout<<obj2->x<<endl;

  return 0;
}
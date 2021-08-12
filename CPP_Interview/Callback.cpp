#include<iostream>
using namespace std;
class B;
class A
{
public:
  void getNotification( void(B::*fp)(int))
  {
    B::(*fp)(10);
  }
};

class B
{
public:
int var;
A* obA;
B(int v):var(v),obA(new A()){}

void setVar(int data)
{
  this->var=data;
  //B* ptr=this;
  notifyA(&obA,this);
  cout<<"Called By A"<<endl;
}
void notifyA(A** ptr,B* ptrb)
{
  (*ptr)->getNotification(&B::setVar);
}

};
int main()
{

}
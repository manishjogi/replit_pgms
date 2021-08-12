#include<iostream>
extern void(*fp)(int,int);

int c;
void multi(int a,int b)
{
  c=a*b;
  std::cout<<"value of c:"<<c<<std::endl;
}

void regi()
{
  std::cout<<"one"<<std::endl;
  fp=multi;
}


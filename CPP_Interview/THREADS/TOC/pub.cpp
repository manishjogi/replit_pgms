#include<unistd.h>
#include<iostream>

//#include "notify.cpp"
void (*fp)(int,int)=nullptr;

int a,b;

void init()
{
  a=10;b=20;
}

void mult(int a,int b)
{
  while(!fp)
  {
    sleep(1000);
    std::cout<<"waiting"<<std::endl;    
  }   
  if(fp)
    fp(a,b);
}

void publish()
{
  std::cout<<"Two"<<std::endl;
  init();
  mult(a,b);
} 
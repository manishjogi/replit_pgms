#include<iostream>
#include<thread>

#include "notify.cpp"
#include "pub.cpp"


using namespace std;

int main()
{
  thread t1(regi);
  thread t2(publish);
  t1.join();
  t2.join();

  return 0;
}
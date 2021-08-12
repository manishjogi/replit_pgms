#include<unistd.h>
#include<iostream>

using namespace std;

void createProcess()
{
  execl("/bin/bash","ls","-l",NULL);
}

int main()
{
  createProcess();
}
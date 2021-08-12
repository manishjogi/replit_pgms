#ifndef ITEM_H
#define ITEM_H


#include<string>
#include<iostream>
using namespace std;
class Item
{
  string name;
  int quantity;
  string imgpath;
  
  public:
  Item();
  Item(string,int,string);
  
  string getName();
  int getQuantity();
  string getImgpath();

  void setName(string);
  void setQuantity(int);
  void setImgpath(string);
  
};

#endif
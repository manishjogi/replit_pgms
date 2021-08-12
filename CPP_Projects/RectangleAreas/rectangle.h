#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;

class Rectangle
{
  float height;
  float width;
public:
  Rectangle();
  Rectangle(float,float);

  void setHeight(float);
  void setWidth(float);

  float getHeight();
  float getWidth();

  ~Rectangle();
  
};



#endif
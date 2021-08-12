#include "rectangle.h"

Rectangle::Rectangle():height(0),width(0){}
Rectangle::Rectangle(float h,float w):height(h),width(w){}

void Rectangle::setHeight(float hei)
{
  this->height=hei;
}

void Rectangle::setWidth(float wid)
{
  this->width=wid;
}

float Rectangle::getHeight()
{
  return this->height;
}

float Rectangle::getWidth()
{
  return this->width;
}

Rectangle::~Rectangle()
{
  //cout<<"Destructor called"<<endl;
}
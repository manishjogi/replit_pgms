#include "Item.h"

Item::Item():name(" "),quantity(0),imgpath(" "){}

Item::Item(string name,int quantity,string imgpath)
:name(name),quantity(quantity),imgpath(imgpath){}

  string Item::getName()
  {
    return this->name;
  }

  int Item::getQuantity()
  {
    return this->quantity;
  }
  string Item::getImgpath()
  {
    return this->imgpath;
  }

  void Item::setName(string)
  {

  }
  void Item::setQuantity(int)
  {

  }
  void Item::setImgpath(string)
  {

  }



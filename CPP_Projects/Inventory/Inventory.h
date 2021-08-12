#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include "AddItem.h"
#include<vector>
#include<iostream>
using namespace std;


class Inventory
{
  vector<Item*> itemsVec;
  const int maxSize;
  Item* newItem;
  public:
  Inventory(int);

  void makeNewItem();
  void displayItems();
  void removeItem(string);
  void removeListItems(vector<string>);
};

#endif
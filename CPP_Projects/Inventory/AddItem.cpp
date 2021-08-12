#include "AddItem.h"

AddItem::AddItem(Item*& newItm):newItem(&newItm)
{
  createNewItem();
}

void AddItem::createNewItem()
{
  string name,imgPath;
  int quan;

  cout<<"Enter Name : Enter quanty : Enter ImagePath"<<endl;
  cin>>name>>quan>>imgPath;

  //cout<<name<<"\t"<<quan<<"\t"<<imgPath<<endl;
  *newItem=new Item(name,quan,imgPath);
  
}


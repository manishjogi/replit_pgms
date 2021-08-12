#include "Inventory.h"

Inventory::Inventory(int maxSize):maxSize(maxSize)
{
  int choice;
  while(1)
  {
    cout<<"Enter The choice: 1) InsertItem 2)RemoveItem 3)RemovesListOfItems 4)DisplayItems 5)Exit"<<endl;
    cin>>choice;
    
    switch(choice)
    {
      case 1:
        makeNewItem();
      break;
      
      case 2:
      {
        string name;
        cout<<"Enter name to remove"<<endl;
        cin>>name;
        removeItem(name);
      }     
      break;

      case 3:

      break;

      case 4:
        displayItems();
      break;

      case 5:
        cout<<"Exiting"<<endl;
        return;
      break;

      default:
        cout<<"Enter the corrct choice!!"<<endl;
        break;
    }
  }
}


void Inventory::makeNewItem()
{
  newItem=nullptr;
  AddItem* addnew=new AddItem(newItem);
  if(newItem != nullptr)
  {
    itemsVec.push_back(newItem);
    cout<<"Item Saved Successfully!!"<<endl;
  }  
  else
  {
    cout<<"Unsuccessfull!!"<<endl;
  }
}

void Inventory::displayItems()
{
  for(Item* itm:itemsVec)
    cout<<itm->getName()<<endl;
}

void Inventory::removeItem(string name)
{
  if(itemsVec.size() == 0)
  {
    cout<<"No items to Delete!"<<endl;
    return;
  }
  int count=1;
  for(auto i=itemsVec.begin();i != itemsVec.end();i++)
  {
    cout<<(*i)->getName()<<endl;
    if((*i)->getName() == name)
    {
      //delete *i;
      itemsVec.erase(itemsVec.begin()+count);
    }
    count++;
  }
}

void Inventory::removeListItems(vector<string>)
{

}

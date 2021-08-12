#include<iostream>

using namespace std;

class Linked
{
  public:
  class Node
  {
    public:
    int data;
    Node *next;

    Node(int d):data(d),next(nullptr){}

  };
Node* first;

Linked():first(nullptr){}

void InsertFront()
{
  int data;
  Node* newNode;
  while(1)
  {
    cout<<"Enter the data -1 to exit"<<endl;
    cin>>data;
    if(data == -1)
      return;
    else
    {
      newNode=new Node(data);
      if(!first)
      {
        first=newNode;
      }
      else
      {
        // newNode->next=first;
        // first=newNode;

        //insert rear
        Node* temp=first;
        while(temp->next != nullptr)
        {
          temp=temp->next;
        }
        temp->next=newNode;
      }
    }
  }
}

void InsertLoop(int loopposition)
{
  int count=0;
  Node* thirdptr=nullptr;
  int data;
  Node* newNode;
  Node* temp;
  while(1)
  {
    cout<<"Enter the data -1 to exit"<<endl;
    cin>>data;
    if(data == -1)
    {
      newNode->next=thirdptr;
      return;
    }
      
    else
    {
      newNode=new Node(data);
      if(!first)
      {
        first=newNode;
        count++;
      }
      else
      {
        // newNode->next=first;
        // first=newNode;

        //insert rear
        
         temp=first;
        while(temp->next != nullptr)
        {
          temp=temp->next;
        }
        temp->next=newNode;
        count++;
        if(count == loopposition)
        {
          thirdptr=newNode;
          //cout<<"Third Data"<<thirdptr->data<<endl;
        }
          
      }
    }
  }
}
 int DeleteFront()
{
  int data;

  if(!first)
    cout<<"Deletion nt possinble"<<endl;
  else
  {
    Node* temp=first;
    first=first->next;
    data=temp->data;
    delete temp;
  }
  return data;
}


void Display()
{
  if(first == nullptr)
    cout<<"Linked List is Empty"<<endl;
  else
  {
    //cout<<"line 54"<<endl;
    Node* temp=first;
    while(temp != nullptr )
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  }
}
void ReverseLL()
{
  Node* x;Node* y;Node* z;
  x=first;
  y=first->next;
  z=y->next;

  while(z  != nullptr)
  {
    y->next=x;
    x=y;
    y=z;
    z=z->next;
  }
y->next=x;
first->next=nullptr;
first=y;
}

void InserAtPosition(int ind,int data)
{
  if(ind ==1)
  {
    Node* newNode=new Node(data);
    newNode->next=first;
    first=newNode;
    return;
  }
  int count=1;
  Node* temp=nullptr;
  Node *temp1=first;
  while(temp1 != nullptr)
  {
   
    if(count == ind)
    {
      Node* newNode=new Node(data);
      temp->next=newNode;
      newNode->next=temp1;
      return;
    }
     count++;
   temp=temp1;
   temp1=temp->next; 

  }
  cout<<"Index Exceeds"<<endl;

}

  void removeLoop()
  {
    Node* slow=first;
    Node* fast=first;

    do
    {
      slow=slow->next;
      fast=fast->next->next; 
    }while(slow != fast);



    // while(slow != fast)
    // //while(slow && fast && fast->next)
    // {
    //   slow=slow->next;
    //   fast=fast->next->next;
    // }


    Node* p1=first;
    Node* p2=fast;
    int count=1;
    while(p2->next != p1->next)
    {
      count++;
      p1=p1->next;
      p2=p2->next;
    }
    
    cout<<"Loop Detected at:"<<count+1<<" and loop data is "<<p2->next->data<<endl;
    p2->next=nullptr;
    cout<<"Loop removed successfully"<<endl;

  }
  
};

int main()
{
  Linked ll;
  //ll.InsertFront();
  ll.InsertLoop(5);
  ll.removeLoop();
  ll.Display();
  cout<<"---------------------------------"<<endl;
  ll.InserAtPosition(3, 30);
  cout<<"---------------------------------"<<endl;
  ll.Display();
  cout<<"---------------------------------"<<endl;
 // ll.ReverseLL();
 // ll.Display();
 // int dat = ll.DeleteFront();
 
}
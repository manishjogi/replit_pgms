#include "rectangle.h"
#include<fstream>
#include<vector>


void deleteRectangles(vector<Rectangle*>&);

int main()
{
  filebuf fb;
  float height,width;
  vector<Rectangle*> recVec;
  if(fb.open("rectangles.txt", ios::in))
  {
    istream in(&fb);
    while(in)
    {
      in>>height>>width;    
      //cout<<height<<" "<<width<<endl;
      recVec.push_back(new Rectangle(height,width));
    }
  }
  else
  {
    cout<<"File Open Error"<<endl;
  }
  fb.close();

  for(Rectangle* rectangle:recVec)
  {
    cout<<rectangle->getHeight()<<" "<<rectangle->getWidth()<<endl;
  }

  deleteRectangles(recVec);

}

void deleteRectangles(vector<Rectangle*>& recVector)
{
  for(Rectangle* rectangle:recVector)
    delete rectangle;
}
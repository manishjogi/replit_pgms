#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
  int t=*a;
  *a=*b;
  *b=t;
}

int partition(int arr[],int l,int h)
{
  int pivot=arr[h];
  int i=l;int c;
  for(c=l;c<h;c++)
  {
    if(arr[c] < pivot)
    {
      swap(arr[c],arr[i]);
      i++;
    }
  }
  swap(arr[i],arr[c]);
  return i;
}

void quicksort(int arr[],int l,int h)
{
  if(l == h)
    return;
  int pi=partition(arr,l,h);
  quicksort(arr, l, pi);
  quicksort(arr,pi+1,h);
}

int main()
{
  int arr[]={2,4,6,7,1,3,5};
  int size=sizeof(arr)/sizeof(arr[0]);

  quicksort(arr,0,size-1);

  for(int i=0;i<size;i++)
    cout<<arr[i]<<"\t";
}
#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int h)
{
  int leftsize=m-l+1;
  int rightsize=h-m;
  int left[leftsize];
  int right[rightsize];

  //creating two seperate arr
  for(int i=0;i<leftsize;i++)
    left[i]=arr[l+i];
  for(int j=0;j<rightsize;j++)
    right[j]=arr[m+1+j];
  
  //merging to orininal arr
  int i=0;
  int j=0;
  int k=l;
  while(i<leftsize && j<rightsize)
  {
    if(left[i] <= right[j])
    {
      arr[k]=left[i];
      i++;
    }
    else
    {
      arr[k]=right[j];
      j++;
    }
    k++;
  }
  while(i < leftsize)
  {
    arr[k]=left[i];
    i++;k++;
  }
  while(j < rightsize)
  {
    arr[k]=right[j];
    j++;k++;
  }
    
}

void devide(int arr[],int l,int h)
{
  if(l == h)
    return;
  int m=l+(h-l)/2;
  devide(arr,l,m);
  devide(arr,m+1,h);
  merge(arr,l,m,h);
}

void mergesort(int arr[],int l,int h)
{
  devide(arr,l,h);
}


int main()
{
  int arr[]={2,4,6,7,1,3,5};
  int size=sizeof(arr)/sizeof(arr[0]);

  mergesort(arr,0,size-1);

  for(int i=0;i<size;i++)
    cout<<arr[i]<<"\t";
}
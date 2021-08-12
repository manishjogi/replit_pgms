#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;


//method1
vector<int> twoSum(vector<int> vec,int target)
{
  vector<int> indx;
  for(auto it1=vec.begin();it1 != vec.end();it1++)
  {
    auto it2=find(it1+1,vec.end(),target-*it1);
    if(it2 != vec.end())
    {
      indx.push_back(it1 - vec.begin());
      indx.push_back(it2 - vec.begin());
    }
  }


  return indx;
}

vector<int> twoSum2(vector<int> v,int target)
{
  vector<int> res;
  unordered_map<int,int> m;
  for(int i=0;i<v.size();++i)
  {
    int num=v[i];
    int diff=target-num;
    auto it = m.find(diff);
    if(it != m.end())
    {
      res.push_back(it->second);
      res.push_back(i);
      return res;
    }
    m[num]=i;
  }
  
return res;
}

int main()
{
  vector<int> v={0,2,4,3,1,7};
  //vector<int> v={2,7,11,15};
  int target=10;
  vector<int> res=twoSum2(v,target);

  cout<<"vec size:"<<res.size()<<endl;
  for(int i:res)
    cout<<i<<"\t";
  cout<<endl;

}



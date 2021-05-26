#include<bits/stdc++.h>
using namespace std;
#define lld long long int 

int main()
{
  map<lld,lld> list;
  lld input,size,k;
  cout<<"Give the value of k:";
  cin>>k;
  cout<<"Give the size of the list:";
  cin>>size;
  for (lld i=0;i<size;i++)
  {
    cin>>input;
    list[input]=1;
  }
  for (auto i:list)
  {
    if (list.find(k-i.first)!=list.end() && k-i.first != i.first)
    {
      cout<<"True"<<endl;
      return 0;
    }
  } 
  cout<<"false"<<endl;
  return 0;
}

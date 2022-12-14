/*
Question Description:
Given a list "numlist" of numbers, perform the following operations:
If number is completely divisible by 3, then add 5 in it.
Otherwise if, number is even and at the even position then insert 2 at the end in list.
Otherwise, make the element 0.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> numberGames(vector<int> nlist)
{
  // Write your code here ...
  int cnt=0;
  for(int i=0;i<nlist.size();i++)
  {
      if(nlist[i]%3==0)
          nlist[i] += 5;
      else if((i+1)%2==0 && nlist[i]%2==0)
          cnt++;
      else
          nlist[i] = 0;
  }
  while(cnt>0)
  {
      nlist.push_back(2);
      cnt--;
  }
  return nlist;
}



int main()
{
  vector<int> numlist;
  int x,a;
  
  numlist = {3, 12, 7, 20, 15, 19}; // Input1
  // Comment Input1 to provide your inputs
  
  if(numlist.size()==0)
  {
    cout<<"Enter number of elements: \n";
    cin>>x;
    cout<<"\nEnter elements in vector: \n";
    for(int i=0;i<x;i++)
    {
      cin>>a;
      numlist.push_back(a);
    }
    
  }
  
  numlist = numberGames(numlist);
  
  cout<<"[";
  for(int i=0;i<numlist.size()-1;i++)
  {
      cout<<numlist[i]<<", ";
  }
  cout<<numlist[numlist.size()-1]<<"]";
  
  // Expected Output : [8, 17, 0, 20, 20, 0, 2]
  
  
  return 0;
}

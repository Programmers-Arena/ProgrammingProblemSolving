/*
Question Description:
Given two lists "numlist1" and "numlist2" of numbers.
Merge the common elements of both the lists into a list.
Return merged list with unique elements.
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> mergeCommonElements(vector<int> nlist1, vector<int> nlist2)
{
  // Write your code here ...
  set<int> st1,st2;
  set<int> :: iterator itr;
  vector<int> vct;
  
  for(int i=0;i<nlist1.size();i++)
      st1.insert(nlist1[i]);
      
  for(int i=0;i<nlist2.size();i++)
      st2.insert(nlist2[i]);
      
  for(itr=st1.begin();itr!=st1.end();itr++)
  {
      if(st2.find(*itr)!=st2.end())
        vct.push_back(*itr);
  }
  return vct;
  
}



int main()
{
  vector<int> numlist1,numlist2;
  int x,a;
  
  numlist1 = {3, 12, 7, 20, 15, 19}; // Input1
  numlist2 = {12, 5, 15, 1}; // Input2
  // Comment Input1 and Input2 to provide your inputs
  
  if(numlist1.size()==0 && numlist2.size()==0)
  {
    
    cout<<"Enter number of elements of numlist1: \n";
    cin>>x;
    cout<<"\nEnter elements in numlist1: \n";
    for(int i=0;i<x;i++)
    {
      cin>>a;
      numlist1.push_back(a);
    }
    
    cout<<"\nEnter number of elements of numlist2: \n";
    cin>>x;
    cout<<"\nEnter elements in numlist2: \n";
    for(int i=0;i<x;i++)
    {
      cin>>a;
      numlist2.push_back(a);
    }
    
  }
  
  numlist1 = mergeCommonElements(numlist1,numlist2);
  
  cout<<"[";
  for(int i=0;i<numlist1.size()-1;i++)
  {
      cout<<numlist1[i]<<", ";
  }
  cout<<numlist1[numlist1.size()-1]<<"]";
  
  // Expected Output : [12, 15]
  
  
  return 0;
}

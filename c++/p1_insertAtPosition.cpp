/*
Question Description:

Insert the number "num" at the desired position in vector "numlist".
Number "num" can be inserted at the position where it is greater than previous and less than next element.
If number "num" is lowest then insert at 1st position else if highest, then insert at last position.
In any other case return "numlist".
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> insert_at_position(vector<int> numlist, int num)
{
  // Write your code here ...
  int n = numlist.size();
  
  if(num<numlist[0])
  {
    numlist.insert(numlist.begin() + 0, num);
    return numlist;
  }
  else if(num>numlist[n-1])
  {
    numlist.push_back(num);
    return numlist;
  }
  else{
  for(int i=0;i<n-1;i++)
  {
      if(num>numlist[i] && num<numlist[i+1]){
        numlist.insert(numlist.begin() + i+1, num);
        break;
      }
  }
  }
  return numlist;
  
}

int main()
{
  vector<int> nlist;
  int n=INT_MIN,a,x;
  
  nlist = {2, 6, 9, 13, 15, 18}; // Input1
  n= 11;  // Input2
  // Comment Input1 and Input2 to provide your inputs
  
  if(nlist.size()==0)
  {
    cout<<"Enter number of elements: \n";
    cin>>x;
    cout<<"\nEnter elements in vector: \n";
    for(int i=0;i<x;i++)
    {
      cin>>a;
      nlist.push_back(a);
    }
    
  }
  
  if(n==INT_MIN)
  {
    cout<<"Enter number to insert: \n";
    cin>>n;
  }
  
  nlist = insert_at_position(nlist, n);
  cout<<"[";
  for(int i=0;i<nlist.size()-1;i++)
  {
      cout<<" "<<nlist[i]<<",";
  }
  cout<<" "<<nlist[nlist.size()-1]<<" ]";
  
  // Expected Output : [ 2, 6, 9, 11, 13, 15, 18 ]
  
  
  return 0;
}

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

vector<int> mergeCommonElements(vector<int> nlist1, vector<int> nlist2)
{
  // Write your code here ...
  
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

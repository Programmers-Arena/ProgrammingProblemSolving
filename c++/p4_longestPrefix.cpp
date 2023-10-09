/*
Given an array of strings, you need to find the longest prefix among all of them and return the prefix.
If no prefix found then simply return 0.
All strings should be in capital letters.

!! Do not hard code !!
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> arr1 = {"RAIL","RAIN","RAM"};           // Output: ra
    vector<string> arr2 = {"STORE","FIRE","STOVE"};        // Output: 0
    // Start code from below:

    string s = arr1[0];
    int x=0, y=0;
    for(int i=1;i<arr1.size();i++)
    {
        
        if(arr1[i].size()<s.size())
        {
            x = arr1[i].size()-1;
        }
        else
        {
            x = s.size()-1;
        }
        while(y<=x)
        {
            if(s[y]!=arr1[i][y])
                break;
            y++;
        }
        if(s.size()<=0)
        {
            s = "0";
            break;
        }
        else
        {
            s = s.substr(0,y);
        }
        x = 0; y = 0;
    }
    cout<<s;
    
return 0;
}

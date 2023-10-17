/*
Find the pairs from array, whose minimum element sum will produce the maximum possible output.
Output the maximum possible sum.

!! Do not hard code !!
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {3,9,8,6};       // Output: 11
    vector<int> arr2 = {6,2,8,4,7,1};   // Output: 12
    // Start code from below:
        
        int i=0,sum=0;
        sort(arr1.begin(),arr1.end());
        while(i<arr1.size())
        {
            sum += min(arr1[i],arr1[i+1]);
            i+=2;
        }
        cout<<sum;
    
return 0;
}

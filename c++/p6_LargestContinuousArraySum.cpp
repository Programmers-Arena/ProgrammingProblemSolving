/*
Find the largest continuous Array sum of the given Array.
Array will contain negative elements as well.

!! Do not hard code !!
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> arr = { 0, 4, -7, -3, 8, -9, 1, 6, 5, -2 };  // Output: 12
    int n = arr.size();

    //Start code from below

    int limitb = INT_MIN, limite = 0;
 
    for (int i = 0; i < n; i++) {
        limite = limite + arr[i];
        if (limitb < limite)
            limitb = limite;
 
        if (limite < 0)
            limite = 0;
    }
  
    cout<<limitb;
 
    
    return 0;
}

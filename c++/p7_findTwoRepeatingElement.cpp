/*
Write the code to find the two repeating elements in array.
Array is provided.

!! Do not hard code !!
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> arr = { 5, 0, 2, -3, 3, 1, 6, 4, 2, 0 };  // Output: Repeating -> 0, 2
    int size = arr.size();
   
    // Start writing code from here

    cout << "Repeating -> ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
  
    return 0;
}

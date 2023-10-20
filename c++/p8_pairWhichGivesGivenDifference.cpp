/*
Find the pair which produces given difference from array.
You are given difference and an array.

!! Do not hard code !!
*/

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, vector<pair<int, int>>> findPairsWithDifference(vector<int>& arr, int diff) {
    sort(arr.begin(), arr.end());

    int p1 = 0;
    int p2 = 1;
    int count = 0;
    int n = arr.size();
    vector<pair<int, int>> pairs;

    while (p2 < n && p1 < n) {
        if (arr[p2] - arr[p1] == diff) {
            count++;
            pairs.push_back(make_pair(arr[p1], arr[p2]));
            p1++;
            p2++;
        } else if (arr[p2] - arr[p1] > diff) {
            p1++;
        } else {
            p2++;
        }
    }

    return make_pair(count, pairs);
}
int main() {
    vector<int> arr = { 18, 49, 86, 12, 41, 32, 56 };  // Output: 86, 41
    int size = arr.size();
    int diff = 45;

    // Start your code from here
    auto result = findPairsWithDifference(arr, diff);
    cout << "Number of unique pairs with a difference of " << diff << ": " << result.first << endl;

    cout << "Pairs with a difference of " << diff << ": ";
    for (const auto& pair : result.second) {
    cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;

  
return 0;
}

/*
Find the largest continuous Array sum of the given Array.
Array will contain negative elements as well.
*/

#include <iostream>
#include <vector>

using namespace std;

int largestContinuousArraySum(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int maxSum = largestContinuousArraySum(nums);
    
    cout << "Largest Continuous Array Sum: " << maxSum << endl;
    
    return 0;
}

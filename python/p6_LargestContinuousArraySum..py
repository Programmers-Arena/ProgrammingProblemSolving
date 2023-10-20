"""
Find the largest continuous Array sum of the given Array.
Array will contain negative elements as well.

!! Do not hard code !!
"""

nums = [ 0, 4, -7, -3, 8, -9, 1, 6, 5, -2 ]  # Output: 12

# Start code from here

def maxSubArray(nums):
    max_sum = float('-inf')
    current_sum = 0
    
    for num in nums:
        current_sum += num

        if max_sum < current_sum:
            max_sum = current_sum
        
        if current_sum < 0:
            current_sum = 0

    return max_sum

result = maxSubArray(nums)
print("Maximum Subarray Sum:",result)

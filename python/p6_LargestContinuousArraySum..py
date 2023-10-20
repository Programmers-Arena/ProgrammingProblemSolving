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

# Take user input for the list of numbers
user_input = input("Enter a list of numbers separated by spaces: ")
nums = list(map(int, user_input.split()))

result = maxSubArray(nums)
print("Maximum Subarray Sum:", result)

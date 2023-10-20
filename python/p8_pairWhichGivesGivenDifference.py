"""
Find the pair which produces given difference from array.
You are given difference and an array.

!! Do not hard code !!
"""

# arr = [ 18, 49, 86, 12, 41, 32, 56 ]  # Output: 86, 41
# size = len(arr)
# diff = 45

# Start your code from here

  
def find_pair_with_difference(arr, diff):
    element_indices = {}

    for i, num in enumerate(arr):
        complement = num + diff

        if complement in element_indices:
            return [num, complement]

        element_indices[num] = i

    return None

arr = [18, 49, 86, 12, 41, 32, 56]
diff = 45

result = find_pair_with_difference(arr, diff)

if result:
    print("Pair with difference", diff, "is:", result)
else:
    print("No such pair found.")

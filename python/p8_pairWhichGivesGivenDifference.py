"""
Find the pair which produces given difference from array.
You are given difference and an array.

!! Do not hard code !!
"""

arr = [ 18, 49, 86, 12, 41, 32, 56 ]  # Output: 86, 41
size = len(arr)
diff = 45

# Start your code from here
def find_pairs_with_difference(arr, diff):
    arr.sort()  # Sort the arr

    p1 = 0
    p2 = 1
    count = 0
    n = len(arr)
    pairs = []

    while p2 < n and p1 < n:
        if arr[p2] - arr[p1] == diff:
            count += 1
            pairs.append((arr[p1], arr[p2]))  # Store the pair
            p1 += 1
            p2 += 1
        elif arr[p2] - arr[p1] > diff:
            p1 += 1
        else:
            p2 += 1

    return count, pairs
result, pairs = find_pairs_with_difference(arr, diff)
print(f"Number of unique pairs with a difference of {diff}: {result}")
print(f"Pairs with a difference of {diff}: {pairs}")

  

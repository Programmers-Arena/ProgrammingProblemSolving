"""
Write the code to find the two repeating elements in array.
Array is provided.

!! Do not hard code !!
"""

arr = [ 5, 0, 2, -3, 3, 1, 6, 4, 2, 0 ] # Output: Repeating -> 0, 2

# Start writing code from here

size = len(arr)

print("Repeating -> ",end="")
for i in range(0,size):
  for j in range(i+1,size):
    if arr[i] == arr[j]:
      print(str(arr[i])+" ",end="")
      break

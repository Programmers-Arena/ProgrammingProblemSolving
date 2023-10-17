"""
Find the pairs from array, whose minimum element sum will produce the maximum possible output.
Output the maximum possible sum.

!! Do not hard code !!
"""

arr1 = [3,9,8,6]           # Output: 11
arr2 = [6,2,8,4,7,1]       # Output: 12
# Start code from below:

i=0
sum=0
arr1.sort()
while(i<len(arr1)):
    sum += min(arr1[i],arr1[i+1])
    i+=2
print(sum)





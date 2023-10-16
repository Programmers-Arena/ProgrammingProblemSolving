"""
Given a list of strings, you need to find the longest prefix among all of them and return the prefix.
If no prefix found then simply return 0.
All strings should be in capital letters.

!! Do not hard code !!
"""

arr1 = ["RAIL","RAIN","RAM"]           # Output: ra
arr2 = ["STORE","FIRE","STOVE"]        # Output: 0
# Start code from below:

s = arr1[0];
x=0
y=0
for i in range(0,len(arr1)):
    if(len(arr1[i])<len(s)):
        x = len(arr1[i])-1
    else:
        x = len(s)-1
    while(y<=x):
        if(s[y]!=arr1[i][y]):
            break
        y+=1
    if(len(s)<=0):
        s = "0"
        break
    else:
        s = s[0:y]
    x = 0
    y = 0
print(s);



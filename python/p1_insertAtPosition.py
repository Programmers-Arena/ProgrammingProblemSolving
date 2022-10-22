"""
Question Description:

Insert the number "num" at the desired position in list "numlist".
Number "num" can be inserted at the position where it is greater than previous and less than next element.
If number "num" is lowest then insert at 1st position else if highest, then insert at last position.
In any other case return "numlist".
"""

def insert_at_position(numlist, num):
  # Write your code here ...
  
  pass



n = None

nlist = [2, 6, 9, 13, 15, 18] # Input1
n = 11  # Input2
# Comment Input1 and Input2 to provide your inputs

if(len(nlist)==0):
  x = int(input("Enter number of elements: "))
  print("Enter elements in vector: ")
  for i in range(0,len(nlist)):
    a = int(input())
    nlist.append(a)


if(n==None):
  n = int(input("Enter number to insert: "))

nlist = insert_at_position(nlist, n)
print(nlist)

# Expected Output : [2, 6, 9, 11, 13, 15, 18]



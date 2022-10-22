"""
Question Description:

Given two lists "numlist1" and "numlist2" of numbers.
Merge the common elements of both the lists into a list.
Return merged list with unique elements.
"""


def mergeCommonElements(nlist1, nlist2):
  # Write your code here ...
  return nlist2
  pass
  

  
# +++++++++++ Don't write code below this line ++++++++++++


numlist1=[]
numlist2=[]

numlist1 = [3, 12, 7, 20, 15, 19] # Input1
numlist2 = [12, 5, 15, 1] # Input2
# Comment Input1 and Input2 to provide your inputs

if(len(numlist1)==0 and len(numlist2)==0):

  x = int(input("Enter number of elements of numlist1: "))
  print("Enter elements in numlist1: ")
  for i in range(0,x):
    a=int(input())
    numlist1.append(a);

  x = int(input("Enter number of elements of numlist2: "))
  print("Enter elements in numlist2: ")
  for i in range(0,x):
    a=int(input())
    numlist2.append(a);

numlist1 = mergeCommonElements(numlist1,numlist2);

print(numlist1)

# Expected Output : [12, 15]

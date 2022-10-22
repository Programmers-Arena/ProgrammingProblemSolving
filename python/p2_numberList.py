"""
Question Description:
Given a list "numlist" of numbers, perform the following operations:
If number is completely divisible by 3, then add 5 in it.
Otherwise if, number is even and at the even position then insert 2 at the end in list.
Otherwise, make the element 0.
"""

def numberGames(nlist):
  # Write your code here ...
  for i in range(0,len(nlist)):
      if(nlist[i]%3==0):
          nlist[i] += 5
      elif((i+1)%2==0 and nlist[i]%2==0):
          nlist.append(2)
      else:
          nlist[i] = 0
          
  return nlist


# +++++++++++ Don't write code below this line ++++++++++++

numlist=[]

numlist = [3, 12, 7, 20, 15, 19] # Input1
# Comment Input1 to provide your inputs

if(len(numlist)==0):
  x = int(input("Enter number of elements: "))
  print("Enter elements in list: ")
  for i in range(0,x):
    a = int(input())
    numlist.append(a)


numlist = numberGames(numlist);

print(numlist)

# Expected Output : [8, 17, 0, 20, 20, 0, 2]

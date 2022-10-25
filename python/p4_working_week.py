#                                                 A. Working Week

# Your working week consists of n days numbered from 1 to n, after day n goes day 1 again. And 3 of them are days off. One of the days off is the last day, day n. You have to decide when the other two are.

# Choosing days off, you pursue two goals:

# No two days should go one after the other. Note that you can't make day 1 a day off because it follows day n.
# Working segments framed by days off should be as dissimilar as possible in duration. More specifically, if the segments are of size l1, l2, and l3 days long, you want to maximize min(|l1−l2|,|l2−l3|,|l3−l1|).
# Output the maximum value of min(|l1−l2|,|l2−l3|,|l3−l1|) that can be obtained.


# Solution Code

test = int(input())  # taking input

for _ in range(test):
  n = int(input())  # taking individual input for array manipulating
  print(n//3 - 2)  # Printing the answer with logic

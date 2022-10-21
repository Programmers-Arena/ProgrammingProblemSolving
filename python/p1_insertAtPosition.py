def insert_at_position(list, n):

    index = len(list)
    for i in range(len(list)):
        if list[i] > n:
            index = i
            break
    if index == len(list):
        list = list[:index] + [n]
    else:
        list = list[:index] + [n] + list[index:]
    return list


n = None

list = [2, 6, 9, 13, 15, 18]  # Input1
n = 11  # Input2
# Comment Input1 and Input2 to provide your inputs

if (len(list) == 0):
    x = int(input("Enter number of elements: "))
    print("Enter elements in vector: ")
    for i in range(0, len(list)):
        a = int(input())
        list.append(a)


if (n == None):
    n = int(input("Enter number to insert: "))

list = insert_at_position(list, n)
print(list)

# Expected Output : [2, 6, 9, 11, 13, 15, 18]

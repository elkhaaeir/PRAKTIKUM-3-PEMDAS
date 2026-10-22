n = int(input())
multiple = int(input())

total_all = 0

for i in range(1, n + 1):
    total = 0 

    for j in range(i, 0, - 1):
        total = total + j * multiple

        print("(", j, "*", multiple, ")", end=" ")

        if j > 1:
            print("+", end=" ")
            
    print(" = ", total)
    total_all = total_all + total

print(total_all)
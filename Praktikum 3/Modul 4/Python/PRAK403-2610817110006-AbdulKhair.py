first = int(input())
second = int(input())

if first < second:
    for i in range(second - first + 1):
        print(first + i, second - i, end="")
        if i < second - first:
            print(" - ", end="")
else:
    for i in range(first - second + 1):
        print(first - i, second + i, end="")
        if i < first - second:
            print(" - ", end="")
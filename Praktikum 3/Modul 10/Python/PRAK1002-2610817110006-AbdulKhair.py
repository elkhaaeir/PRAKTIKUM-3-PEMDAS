def fibonacci(a, b, n):
    if n == 0:
        return
    else :
        print(a, end=" ")
        fibonacci(b, a + b, n - 1)

n = int(input())

fibonacci(0, 1, n)
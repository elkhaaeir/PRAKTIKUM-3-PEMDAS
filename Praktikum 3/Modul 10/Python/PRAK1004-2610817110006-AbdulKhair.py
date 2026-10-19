def hanoi(n):
    if n == 0:
        return 0
    else :
        return 2 * hanoi(n - 1) + 1
n = int(input())
print(f"Jumlah langkah minimun untuk {n} cakram adalah {hanoi(n)}")
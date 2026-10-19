def digit_value(n):
    if n == 0:
        return 0
    else :
        return n % 10 + digit_value(n // 10)

n = int(input())
print(f"Jumlah digit dari {n} adalah {digit_value(n)}")
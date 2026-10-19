choose = 0

while choose !=5:
    print("/nPilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    choose = int(input("Masukkan Pilihan : "))

    if choose == 1 or choose == 2 or choose == 3 or choose == 4:
        first = float(input("Masukkan Angka Pertama : "))
        second = float(input("Masukkan Angka Kedua : "))

        if choose == 1:
            result = first + second
            operation = "penjumlahan"
        elif choose == 2:
            result = first - second
            operation = "pengurangan"
        elif choose == 3:
            result = first * second
            operation = "perkalian"
        else:
            result = first / second
            operation = "pembagian"

        print(f"Hasil {operation} antara {first:.2f} dengan {second:.2f} adalah {result:.2f}")

    elif choose == 5:
        print("Terimakasih, telah menggunakan kalkulator Abdul Khair")
    else:
        print("Input anda salah, silahkan coba lagi")
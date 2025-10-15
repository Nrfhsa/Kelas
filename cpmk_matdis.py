import math

# ===============================
# FUNGSI-FUNGSI DASAR
# ===============================

# 1. Rule of Sum
def rule_of_sum(a, b):
    return a + b

# 2. Rule of Product
def rule_of_product(a, b):
    return a * b

# 3. Permutasi
def permutasi(n, r):
    return math.factorial(n) // math.factorial(n - r)

# 4. Kombinasi
def kombinasi(n, r):
    return math.factorial(n) // (math.factorial(r) * math.factorial(n - r))

# 5. Pigeonhole Principle
def pigeonhole(objects, boxes):
    if boxes <= 0:
        return "Jumlah kotak tidak boleh nol!"
    return math.ceil(objects / boxes)

# 6. Inclusion–Exclusion Principle (bonus)
def inclusion_exclusion(A, B, intersection):
    return A + B - intersection


# ===============================
# MENU UTAMA
# ===============================

def menu():
    while True:
        print("\n=== PROGRAM MATEMATIKA DISKRIT ===")
        print("1. Counting - Rule of Sum")
        print("2. Counting - Rule of Product")
        print("3. Permutasi")
        print("4. Kombinasi")
        print("5. Pigeonhole Principle")
        print("6. Inclusion–Exclusion Principle")
        print("0. Keluar")

        pilihan = input("\nPilih menu: ")

        # Keluar
        if pilihan == "0":
            print("Terima kasih! 👋")
            break

        # Rule of Sum
        elif pilihan == "1":
            a = int(input("Masukkan jumlah cara pertama: "))
            b = int(input("Masukkan jumlah cara kedua: "))
            print(f"Total cara (Rule of Sum) = {rule_of_sum(a, b)}")

        # Rule of Product
        elif pilihan == "2":
            a = int(input("Masukkan jumlah cara pertama: "))
            b = int(input("Masukkan jumlah cara kedua: "))
            print(f"Total cara (Rule of Product) = {rule_of_product(a, b)}")

        # Permutasi
        elif pilihan == "3":
            n = int(input("Masukkan total elemen (n): "))
            r = int(input("Masukkan elemen yang diambil (r): "))
            print(f"Permutasi P({n},{r}) = {permutasi(n, r)}")

        # Kombinasi
        elif pilihan == "4":
            n = int(input("Masukkan total elemen (n): "))
            r = int(input("Masukkan elemen yang diambil (r): "))
            print(f"Kombinasi C({n},{r}) = {kombinasi(n, r)}")

        # Pigeonhole
        elif pilihan == "5":
            objects = int(input("Masukkan jumlah benda: "))
            boxes = int(input("Masukkan jumlah kotak: "))
            print(f"Minimal satu kotak berisi {pigeonhole(objects, boxes)} benda.")

        # Inclusion–Exclusion
        elif pilihan == "6":
            A = int(input("Masukkan jumlah elemen himpunan A: "))
            B = int(input("Masukkan jumlah elemen himpunan B: "))
            intersection = int(input("Masukkan jumlah irisan A ∩ B: "))
            print(f"|A ∪ B| = {inclusion_exclusion(A, B, intersection)}")

        else:
            print("Pilihan tidak valid! Coba lagi.")


# ===============================
# JALANKAN PROGRAM
# ===============================
if __name__ == "__main__":
    menu()

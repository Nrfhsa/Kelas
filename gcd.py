def GCD(a, b):
    a = a
    b = b

    while b:
        a, b = b, a % b
    return a

print(GCD(48, 18))
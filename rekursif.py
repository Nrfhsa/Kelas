def factorial(n):
    print(n)
    if n == 0:
        return 1
    return n * factorial(n-1)

print(factorial(4))

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

for n in range(10):
    print(fibonacci(n))

def abc(n):
    if n <= 0:
        return
    else:
        print(n, end=' ')
        return abc(n-2)
abc(10)

def count_down(n):
    if n == 0:
        return
    else:
        print(n, end=' ')
        return count_down(n-1)
print(count_down(5))

def a(n):
    if n == 0:
        return 0
    else:
        return n + a(n-1)
print(a(4))

def c(n):
    if n == 40:
        return n
    else:
        return n + c(n*2)
print(c(5))

def d(n):
    if n == 0:
        return 0
    else:
        return (n % 10) + d(n // 10)
print(d(234))

def e(n):
    if n <= 1:
        return 1
    else:
        return e(n-1) + e(n-2)
print(e(5))

def g(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return g(n-1) + g(n-1)
print(g(3))
def h(n):
    if n == 1:
        return 1
    else:
        return n * h(n-1)
print(h(5))

def i(n):
    if n == 0:
        return 0
    else:
        return 1 + i(n//10)
print(i(12345))


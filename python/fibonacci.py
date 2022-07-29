# Fibonacci Number generator


def recursive(n):
    """
    Using basic recursion
    """

    if n == 0: return 0
    if n == 1: return 1
    else: return recursive(n - 1) + recursive(n - 2)

def iterative(n):
    """
    Using iteration
    """

    a = 0
    b = 1
    t = 1

    while t < n:
        c = a + b
        a = b
        b = c

        t += 1
    
    return b

def dynamic(n, mem={0: 0, 1: 1}):
    """
    Using dynamic programming
    """

    if n not in mem: mem[n] = dynamic(n - 1, mem) + dynamic(n - 2, mem)
    
    return mem[n]

def tail_recursive(n, a=0, b=1):
    """
    Using tail recursion
    """

    if n == 1: return b
    else: return tail_recursive(n - 1, b, a + b)

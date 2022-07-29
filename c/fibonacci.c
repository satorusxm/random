#include <stdio.h>

// Using iteration
int iterative(int n);

// Using basic recursion
int recursive(int n);

// Using tail recursion
int tail_recursive(int n, int a, int b);

int main() {
    return 0;
}

int iterative(int n) {
    int a = 0,
        b = 1,
        c,
        i = 1;

    while (i < n) {
        c = a + b;
        a = b;
        b = c;
        
        ++i;
    }

    return b;
}

int recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return recursive(n - 1) + recursive(n - 2);
}

int tail_recursive(int n, int a, int b) {
    return (n == 1) ? b : tail_recursive(n - 1, b, a + b);
}
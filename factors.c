#include <stdio.h>
#include <stdlib.h>

long long factor(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return i; // return smallest factor of n
    }
    return n; // n is a prime number
}

int main() {
    FILE* file = fopen("tests/test00", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    long long n;
    while (fscanf(file, "%lld", &n) == 1) {
        long long p = factor(n);
        printf("%lld=%lld*%lld\n", n, n / p, p);
    }
    fclose(file);
    return 0;
}

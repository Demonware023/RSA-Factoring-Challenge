#include <stdio.h>
#include <math.h>

void factorize(long long n) {
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%lld=%lld*%lld\n", n, i, n / i);
            return;
        }
    }
    printf("%lld=%lld*1\n", n, n);
}

int main() {
    FILE* file = fopen("tests/test00", "r");
    long long n;
    while (fscanf(file, "%lld", &n) == 1) {
        factorize(n);
    }
    fclose(file);
    return 0;
}

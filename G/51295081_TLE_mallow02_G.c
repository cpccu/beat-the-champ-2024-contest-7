#include <stdio.h>

long long reflection(long long n) {
    long long result = 0;
    long long factor = 1;
    while (n > 0) {
        int digit = n % 10;
        result += (9 - digit) * factor;
        factor *= 10;
        n /= 10;
    }
    return result;
}

int main() {
    long long l, r;

    scanf("%lld %lld", &l, &r);
    
    long long max_weight = 0;

    for (long long n = l; n <= r; ++n) {
        long long ref_n = reflection(n);
        long long weight = n * ref_n;
        if (weight > max_weight) {
            max_weight = weight;
        }
    }

    printf("%lld\n", max_weight);

    return 0;
}

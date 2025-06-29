#include <stdio.h>

int main() {
    long long int a = 1, b = 2, temp, sum = 0;

    while (b <= 2000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("Sum of even Fibonacci numbers not exceeding two million: %lld\n", sum);

    return 0;
}

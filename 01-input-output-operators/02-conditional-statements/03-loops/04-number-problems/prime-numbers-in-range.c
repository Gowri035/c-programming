#include <stdio.h>

int main() {
    int start, end, n, i, isPrime;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    for (n = start; n <= end; n++) {
        isPrime = 1;
        if (n <= 1)
            isPrime = 0;
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", n);
    }
    return 0;
}

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num1, num2, count = 0;
    printf("Enter the value of num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("Prime numbers are:\n");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0) {
        printf("There are no primes upto %d\n", num2);
    } else {
        printf("Number of primes between %d and %d = %d\n", num1, num2, count);
    }
    return 0;
}


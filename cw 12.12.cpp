#include <stdio.h>

int romanToInt(char roman[]) {
    int decimal = 0;
    int i;
    for (i = 0; roman[i] != '\0'; i++) {
        switch (roman[i]) {
            case 'M':
                decimal += 1000;
                break;
            case 'D':
                decimal += 500;
                break;
            case 'C':
                if (roman[i+1] == 'M' || roman[i+1] == 'D') {
                    decimal -= 100;
                } else {
                    decimal += 100;
                }
                break;
            case 'L':
                decimal += 50;
                break;
            case 'X':
                if (roman[i+1] == 'C' || roman[i+1] == 'L') {
                    decimal -= 10;
                } else {
                    decimal += 10;
                }
                break;
            case 'V':
                decimal += 5;
                break;
            case 'I':
                if (roman[i+1] == 'X' || roman[i+1] == 'V') {
                    decimal -= 1;
                } else {
                    decimal += 1;
                }
                break;
            default:
                printf("Invalid Roman Number\n");
                return -1;
        }
    }
    return decimal;
}

int main() {
    char roman[20];
    printf("Enter a Roman Number: ");
    scanf("%s", roman);
    int decimal = romanToInt(roman);
    if (decimal != -1) {
        printf("The Decimal value of %s is %d\n", roman, decimal);
    }
    return 0;
}


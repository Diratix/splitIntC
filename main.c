#include <stdio.h>
#include <stdlib.h>

int *splitInt(int number) {
    int len = 0;
    int number2 = number;

    while (number > 0) {
        len ++;
        int digit = number%10;
        number /= 10;
    }

    int *digitArr = (int*)malloc(len * sizeof(int));

    while (len > 0) {
        int digit = number2%10;
        number2 /= 10;
        digitArr[len - 1] = digit;
        len --;
    }

    return digitArr;
}

int main() {
    int digit = 2537;

    int *converted = splitInt(digit);

    for (int i = 0; i < 4; i++) {
        printf("%d \n", converted[i]);
    }

    free(converted);
}

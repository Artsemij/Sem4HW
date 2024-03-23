#include <stdio.h>

int main() {
    int number;
    printf("Input number:");
    scanf("%d", &number);

    if (number >= 100 && number < 1000) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
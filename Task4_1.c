#include <stdio.h>

int main(int argc, char **argv) {
    int a, b, sum = 0;
    printf("Input nmbers: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("%d\n", sum);

    return 0;
}
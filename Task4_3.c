
#include <stdio.h>

int main() {
    int number;
    int allEven = 1; // Переменная, показывающая, что все цифры четные (по умолчанию предполагаем, что все четные)
    printf("Input number:");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) { // Если встречается нечетная цифра
            allEven = 0; // Обновляем переменную
            break; // Выходим из цикла
        }
        number = number / 10;
    }

    if (allEven) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
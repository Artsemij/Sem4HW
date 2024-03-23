#include <stdio.h>

// Функция для вычисления суммы цифр числа
int sumOfDigits(int number) {
int sum = 0;
while (number > 0) {
sum += number % 10;
number = number / 10;
}
return sum;
}

// Функция для вычисления произведения цифр числа
int productOfDigits(int number) {
int product = 1;
while (number > 0) {
product *= number % 10;
number = number / 10;
}
return product;
}

int main(int argc, char **argv) {
int n;
printf("Input number:");
scanf("%d", &n);

for (int i = 10; i <= n; i++) {
if (sumOfDigits(i) == productOfDigits(i)) {
printf("%d ", i);
}
}
printf("\n");

return 0;
}

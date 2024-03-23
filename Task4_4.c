#include <stdio.h>
int main() 
{
 int number, reversed = 0;
 printf("Please, input your number:");
 scanf("%d", &number);
   while (number != 0) 
   {
    int digit = number % 10; // Получаем последнюю цифру числа
    reversed = reversed * 10 + digit; // Увеличиваем разрядность результата и добавляем цифру
    number = number / 10; // Убираем последнюю цифру числа<br/> 
   } 
printf("%d\n", reversed);
return 0;
}
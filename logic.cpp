// [The Count of Even Digits]
// Количество чётных цифр 
//
// Необходимо разработать рекурсивную функцию, которая подсчитывает 
// количество чётных цифр у заданного пользователем целого числа.
// Число может быть как положительным, так и отрицательным.
// Не забудьте, что цифра ноль в математике является чётным числом. 

#include "logic.h"

int count_even_digits(long long number) {
    if (number < 0) { number = -number; }


    if (number < 10) {
        return (number % 2 == 0) ? 1 : 0;
    }


    int lastDigit = number % 10;
    return lastDigit % 2 == 0 ? 1: 0  + count_even_digits(number / 10);
  
   
}
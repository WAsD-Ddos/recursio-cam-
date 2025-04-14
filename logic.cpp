// [The Count of Even Digits]
// ���������� ������ ���� 
//
// ���������� ����������� ����������� �������, ������� ������������ 
// ���������� ������ ���� � ��������� ������������� ������ �����.
// ����� ����� ���� ��� �������������, ��� � �������������.
// �� ��������, ��� ����� ���� � ���������� �������� ������ ������. 

#include "logic.h"

int count_even_digits(long long number) {
    if (number < 0) { number = -number; }


    if (number < 10) {
        return (number % 2 == 0) ? 1 : 0;
    }


    int lastDigit = number % 10;
    if (lastDigit % 2 == 0) {
        return 1 + count_even_digits(number / 10);
    }
    else {
        return count_even_digits(number / 10);
    }
}
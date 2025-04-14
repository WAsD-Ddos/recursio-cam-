#include "test.h"

// ������ ������ ������ ��������� ������� count_even_digits �� ��������� ������� ������,
// ������� ������������� � ������������� �����, ����� � ������� ������������ 
// ������ � �������� ����, � ����� �������/��������� ��������.

// �������� ������ ������� ���������������

// base case (��������� ����� � ������� � ��������� �������)
void test01() {
	long long number = 1234567890;
	int expected = 5;
	print_test(number, expected, "test01");
}

// only odd digits (������ �������� �����)
void test02() {
	long long number = -13579;
	int expected = 0;
	print_test(number, expected, "test02");
}

// only even digits (������ ������ �����)
void test03() {
	long long number = -24680;
	int expected = 5;
	print_test(number, expected, "test03");
}

// all digits are the same, even (��� ����� ���������� ������)
void test04() {
	long long number = 22222;
	int expected = 5;
	print_test(number, expected, "test04");
}

// all digits are the same, odd (��� ����� ���������� ��������)
void test05() {
	long long number = 11111;
	int expected = 0;
	print_test(number, expected, "test05");
}

// number is with even and odd digits (������������ ������ � �������� �����)
void test06() {
	long long number = 121212;
	int expected = 3;
	print_test(number, expected, "test06");
}


// �������� ������ ��������� ��������

// zero (���� - ������ �����)
void test07() {
	long long number = 0;
	int expected = 1;
	print_test(number, expected, "test07");
}

// one even digit (���� ������ �����)
void test08() {
	long long number = 2;
	int expected = 1;
	print_test(number, expected, "test08");
}

// one odd digit (���� �������� �����)
void test09() {
	long long number = 1;
	int expected = 0;
	print_test(number, expected, "test09");
}

// max long long type number (������������ �������� ���� long long)
void test10() {
	long long number = 9223372036854775807LL;
	int expected = 9;
	print_test(number, expected, "test10");
}

// min long long type number (����������� �������� ���� long long)
void test11() {
	long long number = -9223372036854775808LL;
	int expected = 1;
	print_test(number, expected, "test11");
}
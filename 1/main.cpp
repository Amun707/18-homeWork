#include <iostream>
#include <cmath>

//Задача 1. Возвращение суммы.
template<typename T>
double sum(T num1, T num2, T num3, T num4, T num5) {
	return (num1 + num2 + num3 + num4 + num5);
}

//Задача2. Ср.фриф. 3-х чисел.
inline double sum1(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3.0;
}

//Задача3. Макс. из переданных значений.
int max(int num1, int num2, int num3) {
	std::cout << "Three int\n";
	int max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}
double max(double num1, double num2, double num3) {
	std::cout << "Three double\n";
	double max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}
short max(short num1, short num2, short num3) {
	std::cout << "Three short\n";
	short max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}

//Задача4. Возврат простого числа из массива.
template<typename T>
void print_Arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
template<typename T>
int first_prime(T arr[], const int length) {
	for (int i = 0; i < length; i++) {
		int counter = 0;
		for (int j = 1; j <= arr[i]; j++)
			if (arr[i] % j == 0)
				counter++;
		if (counter == 2)
			return arr[i];
	}
	return -1;
}


int main() {
	system("chcp 1251>nul");
	int n, m, a, b, c;
	//Задача1.
	std::cout << "Задача 1.\nВведите 5 разных чисел ->";
	std::cin >> n >> m >> a >> b >> c;
	std::cout << "Сумма 5 чисел" << " = " << sum(n, m, a, b, c) << "\n\n";

	//Задача2.
	std::cout << "Задача 2.\nВведите 3 числа ->";
	std::cin >> n >> m >> a;
	std::cout << "Среднее арифметическое 3-х чисел = " << sum1(n, m, a) << "\n\n";

	//Задача3.
	std::cout << "Задача 3.\nМаксимальное значение.\n";
	std::cout << max(288, 333, 444) << std::endl;
	std::cout << max(2.2, 3.3, 4.4) << std::endl;
	std::cout << max((short)2, (short)3, (short)4) << std::endl;

	//Задача4.
	std::cout << "Задача 4.\nИзначальный массив:\n";
	const int size = 5;
	int int_arr[size]{ 6, 3, 8, 7, 15 };
	print_Arr(int_arr, size);
	std::cout << "Первое простое число в массиве: "<<first_prime(int_arr, size)<<"\n\n";




	return 0;
}
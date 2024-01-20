
#include <iostream>
#include <math.h>
#include <string>

double PowNum(double num, double powerNum) {
	double result = 1;
	for (size_t i = 0; i < powerNum; i++)
	{
		result = result * num;
	}
	return result;
}

std::string GetSystem(int number, int systemNum) {
	std::string result = "";
	while (number > 0) {
		result = std::to_string(number% systemNum) + result;
		number /= systemNum;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "rus");
	//Task1
	double num,powerNum,result,myResult;
	std::cout << "Введите число\n";
	std::cin >> num;
	std::cout << "Введите степень числа\n";
	std::cin >> powerNum;
	result = pow(num, powerNum);
	myResult = PowNum(num, powerNum);
	std::cout << "Результат с использованием библиотеки math.h: " << result <<"\n";
	std::cout << "Результат с использованием моей функции: " << myResult << "\n\n";
	 
	//Task2
	double number;
	std::cout << "Введите число\n";
	std::cin >> number;
	std::cout << "Число в двоичной системе: " << GetSystem(number,2) << "\n";
	std::cout << "Число в троичной системе: " << GetSystem(number, 3) << "\n";
	std::cout << "Чисо в восьмеричной системе: " << GetSystem(number, 8) << "\n";

	
}


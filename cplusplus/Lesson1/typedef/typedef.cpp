#include <iostream>
// Что бы каждый раз не писать unsigned short int и тд в языке c++ есть ключевая конструкция typedef
// Например typedef unsigned short int USHORT;
int main()
{
	// Пример
	// Создаем определение типа
	typedef unsigned short int USHORT;

	// Задаем значение переменных 
	USHORT width = 26;
	USHORT length = 40;

	// Умножение width и length 
	USHORT area = width * length;

	std::cout << "Width: " << width << "\n";
	std::cout << "Length: " << length << "\n";
	std::cout << "Width * Length: " << area << "\n";
	return 0;
}


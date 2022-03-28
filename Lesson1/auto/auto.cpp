#include <iostream>
int main()
{
	//auto - конструкция позволяющая вывести тип данных переменной на основе значений
	//Например:
	auto index = 3;
	auto multiple = 2.25;
	auto rate = 500 / 3.0;


	// Простая программа которая вычисляет статистику боёв для персонажа в видеоигре(Например)
	// Определяем параметры персонажа
	auto strength = 80;
	auto accuracy = 45.5; 
	auto dexterity = 24.0;
	// Определяем константы
	const auto MAXIMUX = 50;
	//Вычисляем показатели персонажа
	auto attack = strength * (accuracy / MAXIMUX);
	auto damage = strength * (dexterity / MAXIMUX);

	std::cout << "Attack rating = " << attack << std::endl;
	std::cout<< "Damage rating = " << damage << std::endl;
	return 0;
}


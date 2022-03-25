#include <iostream>
int add(int x, int y, int z) 
{
	std::cout << "Калькулятор очень глупый и высчитывает..\n";
	return x + y + z; 
}

int main()
{
	std::cout << "Сумма 100 + 300 + 500 ? " << "\n";
	std::cout << "Сумма будет равна = " << add(100, 300, 500) << "\n";
	return 0;
}
#include <iostream> 
int main()
{
	// Программа вычисляющая объем трехмерного прямоугольного параллепипеда, имеющая длину, высоту и ширину
	using namespace std;
	unsigned long int width = 150;
	auto length = 300.5;
	auto height = 15;
	long long VOLUME;
	VOLUME = width * length * height;
	cout << "Volume of Cuboid: " << VOLUME << "\n";
	return 0;
}



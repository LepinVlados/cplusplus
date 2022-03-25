#include <iostream>
int main()
{
	//Литеральная константа 
	long width = 19;
	
	//Символьная константа
	const int KILL_BONUS = 5000;
	// Например как только зомби будет уничтожен, счет игрока увеличится на величину вознаграждения 
	
	// Еще можно задать константу #define , она не имеет типа, она включает механизм замены всех вхождений слова
	// KILL_BONUS в коде значением 5000
	

	// Перечисляемые константы 
	enum COLOR {RED, BLUE, GREEN, WHITE, BLACK}; // {0, 1, 2, 3, 4} соответственно
	enum COLOR1 {YELLOW = 100, BLUEDARK = 500};

	//Простая программа использует перечисленные константы для обозначения восьми сторон света и хранит 
	//их в переменной heading
	enum Direction {North, Northheast, East, Southeast, South, Southwest, West, Northwest};
	//Создаем переменную для значений перечислимых констант
	Direction heading;
	// Инициализируем эту переменную
	heading = Southeast;
	std::cout << "Moving" << heading << std::endl;
	return 0;


}

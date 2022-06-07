#include "STACK.h"
#include <ctime>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int SIZE = rand() % 5 + 5;
	STACK S(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		S.PUSH(rand() % 50);
	}

	std::cout << "Вміст стеку:" << std::endl;
	S.PRINT();

	S.POP();

	std::cout << std::endl << "Вміст стеку (POP):" << std::endl;
	S.PRINT();

	std::cout << std::endl << "Верхній елемент (TOP): " << S.TOP() << std::endl;

	std::cout << std::endl << "Очищення стеку! (MAKENULL)" << std::endl;
	S.MAKENULL();

	std::cout << "СТЕК: ";
	if (S.EMPTY())
		std::cout << "порожній!" << std::endl;
	else
		std::cout << "не порожній.." << std::endl;
}
#include "STACK.h"

STACK::STACK(int size)
{
	data = new int[size];
	SIZE = size;
	top = SIZE + 1;
}

STACK::~STACK()
{
	delete[] data;
}

void STACK::MAKENULL()
{
	top = SIZE + 1;
}

void STACK::PUSH(int data)
{
	if (top == 1)
		std::cout << "Стек повний!" << std::endl;
	else
	{
		top--;
		this->data[top - 1] = data;
	}
}

void STACK::POP()
{
	if (top > SIZE)
		std::cout << "Стек порожнiй!" << std::endl;
	else
		top++;
}

int STACK::TOP()
{
	if (top > SIZE)
		std::cout << "Стек порожнiй!" << std::endl;
	else
		return this->data[top - 1];
}

bool STACK::EMPTY()
{
	if (top > SIZE)
		return true;
	return false;
}

void STACK::PRINT()
{
	if (top > SIZE)
		std::cout << "Стек порожнiй!" << std::endl;
	else
		for (int i = top; i < SIZE; i++)
		{
			std::cout << "[" << i << "] = " << data[i - 1] << std::endl;
		}
}
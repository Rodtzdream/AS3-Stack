#pragma once
#include <iostream>
#include <Windows.h>

class STACK
{
public:

	STACK(int size);
	~STACK();
	void MAKENULL();
	void PUSH(int data);
	void POP();
	int TOP();
	bool EMPTY();
	void PRINT();

private:
	int* data;
	int top;
	int SIZE;
};
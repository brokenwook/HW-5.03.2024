#include <iostream>

int* arr{ new int[10]{}};

void write()
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand()%200;
	}
}

void rewrite()
{
	for (int i = 6; i < 10; i++)
	{
		arr[i++] = arr[i];	
	}
	arr[6] = 999;
	
}

void print()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));
	write();
	rewrite();
	print();
	
}

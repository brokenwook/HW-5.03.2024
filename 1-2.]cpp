#include <iostream>

int main()
{
	int arr1[10];
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 1;
	}

	int arr2[20];
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = arr1[i];
	}
	for (int i = 10; i < 20; i++)
	{
		arr2[i] = 2;
	}

	int arr3[35];
	for (int i = 0; i < 20; i++)
	{
		arr3[i] = arr2[i];
	}
	int arr4[65];

	int index = 0;
	for (int i = 0; i < 10; i++) {
		arr4[index++] = arr1[i];
	}
	for (int i = 0; i < 20; i++) {
		arr4[index++] = arr2[i];
	}
	for (int i = 0; i < 35; i++) {
		arr4[index++] = arr3[i];
	}

	std::cout << "arr4: ";
	for (int i = 0; i < 65; i++) {
		std::cout << arr4[i] << " ";
	}
}

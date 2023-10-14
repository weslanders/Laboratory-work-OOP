#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int sizeA = 5;
	int sizeB = 4;

	int* A = new int[sizeA];
	int* B = new int[sizeB];

	int sumA = 0;
	int sumB = 0;

	for (int i = 0; i < sizeA; i++)
	{
		A[i] = rand() % 20;
	}

	for (int i = 0; i < sizeB; i++)
	{
		B[i] = rand() % 10;
	}

	cout << "Массив A: ";

	for (int i = 0; i < sizeA; i++)
	{
		cout << A[i] << " | ";
	}

	cout << endl;
	cout << endl;

	cout << "Массив B: ";

	for (int i = 0; i < sizeB; i++)
	{
		cout << B[i] << " | ";
	}
	cout << endl;
	cout << endl;
	cout << "Результат: " << endl;
	cout << endl;

	for (int i = 0; i < sizeA; i++)
	{
		A[i] += sumA;
	}

	for (int i = 0; i < sizeB; i++)
	{
		B[i] += sumB;
	}

	if (sumA < sumB)
	{
		for (int i = 0; i < sizeA; i++)
		{
			cout << A[i] << " | ";
		}
	}
	else
	{
		for (int i = 0; i < sizeB; i++)
		{
			cout << B[i] << " | ";
		}

	}

	cout << endl;
	cout << endl;

	if (sumA > sumB)
	{
		for (int i = 0; i < sizeB; i++)
		{
			cout << B[i] << " | ";
		}

	}
	else
	{
		for (int i = 0; i < sizeA; i++)
		{
			cout << A[i] << " | ";
		}

	}

	delete[] A;
	delete[] B;
}

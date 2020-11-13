#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void array1(int* r, const int n, const int min, const int max)
{
	for (int i = 0; i < n; i++)
		r[i] = min + rand() % (max - min + 1);
}

void array2(int* r, const int n)
{
	for (int i = 0; i < n; i++)
		if ((r[i] % 2 == 0) || (i % 7 != 0))
			cout << 0 << "; ";
		else
			cout << r[i] << "; ";
}

void mas(int* r, const int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << r[i] << "; ";
	cout << endl;
}

int sum(int* r, const int n)
{
	int j = 0;
	int S = 0;
	for (int i = 0; i < n; i++)
		if ((r[i] % 2 == 0) || (i % 7 != 0))
			S += r[i];
	return S;
}

int number(int* r, const int n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
		if ((r[i] % 2 == 0) || (i % 7 != 0))
			j++;
	return j;
}

int main()
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int n = 26;
	int r[n];
	int min = 3;
	int max = 92;
	array1(r, n, min, max);
	cout << "Масив із рандомних чисел:";
	mas(r, n);
	cout << "Модифікований масив: ";
	array2(r, n);
	cout << endl;
	cout << "Сума елементів масиву: " << sum(r, n) << endl;
	cout << "Кількість елементів масиву: " << number(r, n) << endl;
	return 0;
}


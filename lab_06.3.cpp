#include <iostream>
#include <iomanip>
#include <time.h>
#include <algorithm>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void Sort(int* a, const int n) {
	for (int i = 0; i < n - 1; ++i) {
		int imax = i;
		for (int j = i + 1; j < n; ++j)
			if (a[j] > a[imax])
				imax = j;
		if (imax != i)
			swap(a[i], a[imax]);
	}
}

template <typename T>
void Create(T* a, const int size, const T Low, const T High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

template <typename T>
void Print(T* a, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template <typename T>
void Sort(T* a, const int n) {
	for (int i = 0; i < n - 1; ++i) {
		int imax = i;
		for (int j = i + 1; j < n; ++j)
			if (a[j] > a[imax])
				imax = j;
		if (imax != i)
			swap(a[i], a[imax]);
	}
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = 1;
	int High = 100;
	Create(a, n, Low, High);
	Print(a, n);
	Sort(a, n);
	Print(a, n);
	return 0;
}
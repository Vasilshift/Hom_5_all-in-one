#include <iostream>
using namespace std;

int main() {

	const int n = 8;
	int arr[n] = { 20, 5, 4, 2, 6, 4, 9, 8 };
	int summ = 0;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < n; i++)
	{
		summ = summ + arr[i];
	}

	double sred = summ / n;

	cout << endl;

	if (sred > 0)
	{
		cout << "Print 2/3 array: " << endl;

		int dvetreti = n * 2 / 3;

		for (int j = 1; j < dvetreti; j++)
		{
			int key = arr[j];
			int k = j - 1;

			while (k >= 0 && arr[k] > key)
			{
				arr[k + 1] = arr[k];
				arr[k] = key;
				k--;
			}
						
		}

		// выводим отсортированный массив (2/3 часть)

		for (int c = 0; c < dvetreti; c++)
		{
			cout << arr[c] << " ";
		}

		// выводим остальную часть массива

		for (int p = n-1; p > dvetreti - 1; p--)
		{
			cout << arr[p] << " ";
		}

	} 

	else

	{
		int tret = n * 1 / 3;

		for (int j = 1; j < tret; j++)
		{
			int key = arr[j];
			int k = j - 1;

			while (k >= 0 && arr[k] > key)
			{
				arr[k + 1] = arr[k];
				arr[k] = key;
				k--;
			}

		}

		// выводим отсортированный массив (1/3 часть)

		for (int c = 0; c < tret; c++)
		{
			cout << arr[c] << " ";
		}
		// выводим остальную часть массива
		for (int p = n - 1; p > tret - 1; p--)
		{
			cout << arr[p] << " ";
		}


	}



	return 0;
}
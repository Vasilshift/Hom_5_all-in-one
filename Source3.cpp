#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

	const int n = 10;
	int arr[n] = { 4, 5, 2, 3, 5, 4, 3, 4, 4, 5 };

	//выводим содержимое массива

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	// изменяем элемент массива

	int i, x;
	
	cout << "Please, insert position from 0 to 9: " << endl;
	cin >> i;

	cout << "Enter the value: " << endl;
	cin >> x;
	
	for (int j = 0; j < n; j++)
	{

		if (j == i)
		{
			arr[i] = x;
		}

	}

	// выводим новый массив

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	double summ = 0;

	for (int p = 0; p < n; p++)
	{
		summ = summ + arr[p];
	}

	cout << endl;

	if (summ >= 10.7)
	{
		cout << "The GRANT will be issued! ";
	}

	return 0;
}
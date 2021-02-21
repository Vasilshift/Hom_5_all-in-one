#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

	const int n = 6;
	int arr[n] = { 200,5,3,56,45,59 };

	//выводим начальный массив

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << endl;

	//выводим сортированный массив метод пузырька

	int tmp = arr[0];

	for (int j = 0; j < n - 1; j++)
	{

		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i+1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
						
		}
				
	}

	for (int a = 0; a < n; a++)
	{
		cout << arr[a] << " ";
	}




	return 0;
}
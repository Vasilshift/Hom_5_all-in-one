#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

	const int n = 6;
	int arr[n] = { 200,5,3,56,45,59 };

	//������� ��������� ������

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	//������� ������������� ������ ����� �������

	for (int i = 1; i < n; i++)
		{
			int tmp = arr[i];
			int j = i - 1;
		
			if (arr[j] >= 0 && arr[j] > tmp)
			{
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				j--;

			}

		}

	
	for (int a = 0; a < n; a++)
	{
		cout << arr[a] << " ";
	}




	return 0;
}
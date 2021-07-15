#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int const SIZE = 10;
	int arr[SIZE];
	srand(time(NULL));
	int i;
	int j;
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				arr[i] = rand() % 10;
				j = -1;
			}
		}
		cout << arr[i] << endl;

	}
}

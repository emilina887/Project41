#include <iostream>
using namespace std;

void gnome_sort(int* arr, int size)
{
	int iterations = 0;
	if (arr != nullptr && size > 0)
	{
		int i = 0;
		while (i < size - 1)
		{
			iterations++;
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				if (i == 0)
				{
					i++;
				}
				else
				{
					i--;
				}
			}
			else
			{
				i++;
			}
		}
	}
	cout << "Iterations for Gnome: " << iterations << endl;
}

void stupid_sort(int* arr, int size)
{
	int iterations = 0;
	if (arr != nullptr && size > 0)
	{
		int i = 0;
		while (i < size - 1)
		{
			iterations++;
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				if (i == 0)
				{
					i++;
				}
				else
				{
					i = 0;
				}
			}
			else
			{
				i++;
			}
		}
	}
	cout << "Iterations for Stupid: " << iterations << endl;
}

void bubble_sort(int* arr, int size)
{
	int iterations = 0;
	if (arr != nullptr && size > 0)
	{
		for(int i = 0; i < size - 1; i++)
		{
			for(int j = 0; j < size - i - 1; j++)
			{
				iterations++;

				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
	cout << "Iterations for Bubble: " << iterations << endl;
}

void Init(int* arr1,int* arr2, int* arr3, int size)
{
	if (arr1 != nullptr && arr2 != nullptr && arr3 != nullptr && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			int randomNum = rand() % 1001;
			arr1[i] = randomNum;
			arr2[i] = randomNum;
			arr3[i] = randomNum;
		}
	}
}	

int main() {
	srand(time(0));
	/*const int N = 5;*/
	//int arr1[N] = { 1, 2, 3, 7, 5 };
	//int arr2[N] = { 1, 2, 3, 7, 5 };
	//int arr3[N] = { 1, 2, 3, 7, 5 };

	const int N = 1000;

	int arr1[N];
	int arr2[N];
	int arr3[N];

	Init(arr1, arr2, arr3, N);

	gnome_sort(arr1, N);
	stupid_sort(arr2, N);
	bubble_sort(arr3, N);
}
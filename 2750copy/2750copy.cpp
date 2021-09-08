#include <iostream>
using namespace std;
int main(void)
{
	int n, temp;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (arr[j] > arr[k])
			{
				temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;  
			}
		}
	}

	for (int l = 0; l < n; l++)
	{
		if (l + 1 < n && arr[l] == arr[l + 1])
			continue;
		cout << arr[l] << endl;
	}
}
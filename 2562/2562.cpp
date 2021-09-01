#include <iostream>
using namespace std;

int main()
{
	int max = -1000000;
	int array[9];
	int count = -1;

	for (int i = 0; i < 9; ++i)
	{
		cin >> array[i];
		if (max < array[i])
		{
			max = array[i];
			count = i+1;
		}
	}

	cout << max << endl;
	cout << count;

	
	return 0;
}
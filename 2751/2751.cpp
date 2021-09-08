#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int* num = new int(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> *(num+i);
		
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(num+i) > *(num+j))
			{
				int temp;
				temp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = temp;
			}
		}
	}
	for (int z = 0; z < 5; z++)
	{
		cout << *(num+z) << endl;
	}
	delete num;

	return 0;
}
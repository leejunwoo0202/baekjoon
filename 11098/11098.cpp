#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int p = 0;
	int c[100];
	int maxCost = 0;
	string name[100];
	string max = "null";
	string maxName[100];
	    
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> p;

		for (int j = 0; j < p; j++)
		{
			cin >> c[j];			cin >> name[j];
		}
			for (int z = 0; z < p; z++)
			{
				for (int x = 0; x < p; x++)
				{
					if (p == 1)
					{
						max = name[0];
					}
					else if (c[z] < c[x] && maxCost < c[x])
					{
						maxCost = c[x];
						max = name[x];
					}
					else if (c[z] > c[x] && maxCost < c[z])
					{
						maxCost = c[z];
						max = name[z];
					}
				}
				
			}
			maxCost = 0;
			maxName[i] = max;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << maxName[i] << endl;
	}

	return 0;
}
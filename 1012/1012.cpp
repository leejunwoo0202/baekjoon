#include <iostream>
#include <array>
using namespace std;

void main()
{
	int t;
	cin >> t;
	int* test = new int[t];
	int m, n, k;
	int x, y;

	for (int j = 0; j < t; j++) {


		cin >> m >> n >> k;
		for (int i = 0; i < k; i++)
		{

			cin >> x >> y;
		}

		delete[] test;
		test = nullptr;
	}



}
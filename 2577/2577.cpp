#include <iostream>
using namespace std;
bool hansoo(int n);

int main()
{
	int n = 0;
	int count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (hansoo(i) == true)
		{
			count += 1;
		}
	}
	cout << count << endl;
	
	return 0;
}

bool hansoo(int n) 
{
	int hand, ten, one;
	 hand = n / 100;
	 ten  = (n/10) % 10;
	 one  = n % 10;

	if (n < 100 || hand - ten == ten - one)	return true;
	else return false;
	
	
}
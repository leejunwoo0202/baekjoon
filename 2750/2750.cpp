#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* num = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];        
	}    

	
	for (int i = 1; i < n; i++) {
		int temp = num[i];
		int j;
		for(j = i - 1; j >= 0; j--)
		{
			if (num[j] > temp)
				num[j + 1] = num[j];
			else
				break;
		}
		num[j + 1] = temp;
	}

	for (int z = 0; z < n; z++)
	{
		cout << num[z] << endl;
	}
	delete[] num;  
	    
	   
	return 0;
}
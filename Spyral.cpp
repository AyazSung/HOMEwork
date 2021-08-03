#include <iostream>
using namespace std;

void Pprint(int**a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << '-' << a[i][j] <<'-';

		cout << '\n';
	}
}

int main()
{
	int n;
	cin >> n;
	int k = 1;
	int lvl = 0;

	int**a = new int*[n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	
	while (k <= (n * n)) {
		//идём вниз
		for (int i = lvl; i <= n - lvl - 1 ; i++) {
			a[i][lvl] = k;
			k++;
		}
		//идём направо
		for (int i = lvl + 1; i <= n - lvl - 1; i++) {
			a[n-lvl-1][i] = k;
			k++;
		}
		//идём вверх
		for (int i = n - 1 - lvl -1; i >= lvl; i--) {
			a[i][n-lvl-1] = k;
			k++;
		}
		//идём налево
		for (int i = n - lvl - 1 - 1; i >= lvl + 1; i--) {
			a[lvl][i] = k;
			k++;
		}
		lvl++;
	}

	Pprint(a, n);



	


	//очистка памяти
	for (int i = 0; i < n; i++)
		delete a[i];
	delete []a;
}

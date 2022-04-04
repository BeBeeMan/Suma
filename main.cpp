#include <iostream>
using namespace std;

int main()
{
	int a;
	int b = 0;
	while (cin >> a)
	{
		a = a + b;
		cout << a << endl;
		b = a;
	}
}

//https://pl.spoj.com/problems/SUMA/

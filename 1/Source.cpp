#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
T func(T &a)
{
	a = abs(a);
	return a;
}


int main()
{
	cout << "Input number" << endl;
	int a;
	cin >> a;
	func(a);
	cout << a << endl;


	return 0;
}
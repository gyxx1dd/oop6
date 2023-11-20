#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
T func(T a)
{
	cout << abs(a) << endl;
	return 1;
}


int main()
{
	cout << "Input number" << endl;
	int a;
	cin >> a;
	func(a);


	return 0;
}
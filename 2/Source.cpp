#include <iostream>

using namespace std;


template <typename T, int arraySize, typename T2>
class MyClass
{
public:
	MyClass()
	{

	}

	void FullArray()
	{
		for (T i = 0.2; i <= arraySize; i += 0.2)
		{
			if (index<=arraySize-1) 
			{
				array[index] = i;
				++index;
			}
		}
	}

	void ShowArray()
	{
		for (int i = 0; i < arraySize; i++)
		{
			cout << array[i] << endl;
		}
	}

	void FindNumber()
	{
		cout << "Put number to find in array" << endl;
		cin >> number;
		for (int i = 0; i < arraySize; i++)
		{
			if (array[i] == number)
			{
				cout << "Number is find" << endl;
				cout << "Your number is: " << array[i] << "\tIndex of this number: " << i << endl;
				
			}
			
		}
	}

private:
	T array[arraySize];
	int index = 0;
	T2 number;
};



int main()
{
	MyClass<double,10,double> gh;
	gh.FullArray();
	gh.ShowArray();
	gh.FindNumber();
	

	return 0;
}
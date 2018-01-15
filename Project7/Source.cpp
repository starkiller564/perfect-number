#include<iostream>
using namespace std;

void main()
{
	int num, sum = 0;

	cout << "Enter a number: ";
	cin >> num;

	for (int i = num - 1; i > 0; i--)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	if (sum == num)
	{
		cout << "Perfect" << endl;
	}
	else
	{
		cout << "Not perfect" << endl;
	}
	system("pause");
}
#include <iostream>
#include "String.h"

using namespace std;

void String::SetString()
{
	cout << endl << "Enter the string:";

	cin >> _string;

	this->_string = this->CheckString(_string);
}

string String::GetString()
{
	return this->_string;
}

string String::CheckString(string _string)
{
	try
	{
		for (int index = 0; index < _string.length(); index++)
		{
			if ((_string[index] < '0') || (_string[index] > '9'))
			{
				cout << endl << "Invalid value, the string must contain only numbers !!!";
				throw _string;
			}
		}

	}
	catch (string exeption)
	{
		cout << endl << "Enter the string:";

		cin >> _string;

		_string = this->CheckString(_string);
	}

	return _string;
}

void String::MaxValue()
{
	int* symbol = new int[this->_string.length()];
	for (int index = 0; index < this->_string.length(); index++)
	{
		symbol[index] = this->_string[index] - '0';
	}

	int maxValue = 0;

	for (int index = 0; index < _string.length(); index++)
	{
		if (symbol[index] > maxValue)
		{
			maxValue = symbol[index];
		}
	}

	delete[] symbol;

	cout << endl << "The largest digit in the number:" << maxValue;
}

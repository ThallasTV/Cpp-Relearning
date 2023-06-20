#include <iostream>
#include "f1header.h"

using namespace std;


void coutExamples()
{
	cout << "Hello World\n";

	cout << "Goodbye\n";

	cout << "1\n";

	cout << "2 3\n";

	cout << "4 5 6\n";

	cout << "7 8 9 10\n";
}
int additionExample()
{
	int a;
	int b;
	int c;

	cout << "First number: "; 
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	c = a + b;
	cout << "Addition of both numbers: " << c << endl;

	return c;
}
int subtractExample()
{
	int a;
	int b;
	int c;

	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	c = a - b;
	cout << "Subtraction of both numbers: " << c << endl;

	return c;
}
int multiplyExample()
{
	int a;
	int b;
	int c;

	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	c = a * b;
	cout << "Multiplication of both numbers: " << c << endl;

	return c;
}
int divideExample()
{
	int a;
	int b;
	int c;
	int d;

	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	c = a / b;
	d = a % b;
	cout << "Division of both numbers: " << c << "\n""Remainder: " << d << endl;

	return c;
}
void incrementExample()
{

}
#include "f1header.h"

using namespace std;

void numGenerator()
{
	int numGen = (rand() % 100);
	srand(time(0));
	for (int x = 0;x < 5;x++)
		cout << 1 + (rand() % 10) << "\n";
}
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
void incdecrementExample()
{
	int a = 0;
	int b = 100;

	cout << "Initial value of A: " << a << endl;
	cout << "Initial value of B: " << b << endl;
	cout << "-----------------------------------" << endl;
	while (a != 100 && b != 0)
	{
		a++;
		b--;

		cout << "Value of A: " << a << endl;
		cout << "Value of B: " << b << endl;
		Sleep(20);
	}
}
void simplePointer() 
{
	int valueOne = 1;
	int* valueTwo = &valueOne;

	cout << "Output of Value One: " << valueOne << endl;
	cout << "Output of Value Two: " << valueTwo << endl;

	*valueTwo = 89; //dereferenced pointer is overriding the initial value contained in the memory location it's pointing to.
	cout << "Test to see if Value One has changed: " << valueOne << endl;

}
void arrayPointer()
{
	constexpr int BIG = 5;
	//Example given from "Beginning C++ Programming (Pointer Arithmatic)
	int a[BIG] = { 1, 2, 3, 4, 5}; // array without initialising the size
	int* pa; //int pointer thats pointing to the first value within the array (First value = 1)
	pa = a;
	
	for (int i = 0; i < BIG; i++)
	{//for loop looping 7 times (Same amount as the values within the array)
		*pa *= 3; //used to be *pa++ *= 3, postfix operator caused issues so incrementing is done post calculation.
		cout << "Modified array value[" << i << "]: " << *pa << endl;
		pa++;
		
		
	}
	
	
}
void multiArray()
{
	cout << numGenerator() << endl;
	int twoByTwoArray[4][2][2] = {{{numGenerator(), numGenerator()},{numGenerator(), numGenerator()}},
								{{numGenerator(), numGenerator()},{numGenerator(), numGenerator()}}
	};

	cout << "Array value: " << twoByTwoArray[2][1][0] << endl;
}
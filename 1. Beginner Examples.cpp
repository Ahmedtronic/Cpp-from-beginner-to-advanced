#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
	// 1. Print Hello world:
	cout << "Hello World" << endl;


	// 2. Enter a number by a user: 
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	cout << "You entered " << number << endl;


	// 3. Add two numbres 

	int number1, number2; 
	cin >> number1 >> number2; 

	// Solution 1: 
	cout << number1 + number2 << endl;

	// Solution 2: 
	int sum = number1 + number2;
	cout << sum << endl;


	// Solution 1 is better, why ? 



	// 4. Find Quotient and Remainder
	int divisor, dividend, quotient, remainder;

	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;


	// 5.Find Size of each data type: 
	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;



	// 6. Swap two numbers ( with third variable ) 
	int a = 5, b = 10, temp;

	cout << "Before swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;


	// Solution 2 : without third variable: 

	int a = 5, b = 10;

	cout << "Before swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;


	// 7. Check whether the number is even or odd
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	if (n % 2 == 0)
		cout << n << " is even.";
	else
		cout << n << " is odd.";

	
	// 8. Print Area of Rectangle: 

	int width, height; 
	cin >> width >> height; 
	cout << "Area =  " << width * height << endl;

	// 9. Print Area of Square: 
	int l; 
	cin >> l;
	cout << l * l << endl;


	// 10. Print Area of Circle
	float raduis; 
	cin >> raduis;

	cout << raduis * 3.14 * 3.14 << endl;







}


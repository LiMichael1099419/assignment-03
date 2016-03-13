


#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int gcd(int , int  );
int fib(int );
int pow(int, int);
int tri(int);

//recursive case
int gcd_iter(int, int);
int fib_iter(int);
int pow_iter(int, int);
int tri_iter(int);


int gcd(int a, int b)
{
	if (a < 0) {
		a = abs(a);
	
	}
	if (b < 0) {
		b = abs(b);
		
	}
	if (a == 0 && b!=0)
	{
	 return b;
	}
	if (b == 0 && a != 0)
	{
	return a;
	}
	if (a > b) 
	{
		return gcd(a - b, b);
	}
	else
	{
		return gcd(a, b - a);
	}

}

int fib(int n)
{
	if (n < 0)
		throw "Invalid Input";
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}
int pow(int x, int y)
{
	if (y < 0) {
		throw "Invalid Input";
	}
	if (y == 0) {
		return 1;
	}
	else {
		return (x * pow(x, y - 1));
	}
}
int tri(int t) {
	if (t < 0)
		throw "Invalid Input";
	if (t == 0)
		return 0;
	else
	return t + tri(t - 1);
}
//part 5
int gcd_iter(int a, int b)
{
	if (a < 0)
		a = abs(a);
	if (b<0)
		b = abs(b);
	while (a != 0 || b != 0)
	{
		if (a > b)
			a -= b;
		if (b > a)
			b -= a;
		if (a == b)
			return a;}
	if (a == 0)
	{
		return b;
	}
	if (b==0)
	{
		return a;
	}

}
int fib_iter(int n)
{
	int x = 0, y = 1, a = 1;

	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (int i = 1; i <= n; i++)
	{
		a = x + y;
		x = y;
		y = a;
	}
	return a;



}

int pow_iter(int a, int b)
{
	int x =1 ;
	for (int i = 0; i < b; i++)
	{
		x *= a;
	}
	return x;
}

int tri(int t)
{
	int x = 0;
	int y = 0;
	do {
		y += x;
		x++;
	}while (x <= t);
	return y;
}

int main()
{
	//gcd
	int a, b;
	cout << "    GCD    " << endl;
	cout << "Enter two numbers to find the GCD" << endl;
	cin >> a >> b;

	cout << "The GCD is " << gcd(a, b) << endl;
	cout << "Recursive: The GCD is " << gcd_iter(a, b) << endl;
	cout << "\n\n";

	//fib
	int f;
	cout << "   Fibonacci  " << endl;
	cout << " Enter a number for fib" << endl;
	cin >> f;
	for (int i = 1; i <= f; i++)
	{
		cout << fib(i) << " ";
	}
	cout << "\n\n";
	cout << "   Recursive   " << endl;
	for (int i = 1; i <= f; i++)
	{
		cout << fib_iter(i) << " ";
	}

	//pow
	int c, d;
	cout << "  Power fuction\n";
	cout << "Enter the Base Number and the Power(separated by a space)\n";
	cin >> c >> d;
	cout << " The result is " << pow(c, d) << "\n\n";
	cout << " Recursive : The result is " << pow_iter(c, d) << "\n\n";

	//triangle
	int r;
	cout << "Triangle\n\n";

	cout << "Enter numbers of rows\n\n";
	cin >> r;
	for (int i = 0; i < r; i++) {
		for (int x = 0; x <= i; x++) {
			cout << ".";
		}
		cout << endl;
	}
	cout << "The number of dots is " << tri(r) << "\n\n";
	cout << "Recursive: The number of dots is " << tri_iter(r) << "\n\n";




	system("pause");
	return 0;
}
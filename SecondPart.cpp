#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <class X>

X Add(X a, X b)
{
	return a + b;
}
template < class X>
X Average(X a, X b) {
	return (a + b) / 2;
}



int main()
{
	int c, d;
	int x, y;
	cout << " Please enter two numbers : \n";
	cin >> x >> y;
	cout << endl;
	c = Add(x, y);
	d = Average(x, y);
	cout << "The sum of the two numbers is " << c << endl;
	cout << "The average of the two numbers is " << d << endl;

	cin.get();
	cin.get();
	return 0;
}
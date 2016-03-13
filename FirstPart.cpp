#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int age;
	try {
		cout << "Enter your age: " << endl;
		cin >> age;
		if (age > 116)
			throw 1;}
	catch (int x)
	{
		cout << "Nice Try!\n"
			<< "The oldest person alive is 116 year old Ms. Susannah Mushatt Jones from Brooklyn, New York\n "
			<< "Error Number: " << x << endl;
	}
		
	
	
	
	system("pause");
		return 0;
}
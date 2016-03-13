/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <limichael1099419@csu.fullerton.edu> god help us donald trump is about to be president
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
#include <vector>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	vector <string> BS (5, "	Bernie Sanders 2016   ");
	vector <string> bs (6, "	#FeelTheBern	  ");

	

	for (string election : BS) {
		cout << election << endl;
	}
	cout << "\n\n";
	for (string election : bs) {
		cout << election << endl;
	}

	system("pause");
	return 0;
}

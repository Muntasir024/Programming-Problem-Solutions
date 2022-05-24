#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	int n = 1;
	while (getline(cin, word) && word != "*") {
		cout << "Case " << n++ << ": ";
		if (word == "Hajj") cout << "Hajj-e-Akbar";
		else if (word == "Umrah") cout << "Hajj-e-Asghar";
		cout << endl;
	}
	return 0;
}

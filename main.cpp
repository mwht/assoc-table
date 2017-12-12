#include "AssocTable.hpp"
#include <iostream>

using namespace std;

int main() {
	AssocTable at;
	at["test"] = 1337;
	at["asdasd"] = 2137;
	cout << at["asdasd"] << " " << at["test"] << endl;
	AssocTable at2 = at;
	cout << at2["test"] << endl;
	return 0;
}

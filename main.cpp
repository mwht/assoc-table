#include "AssocTable.h"
#include <iostream>

using namespace std;

int main() {
	AssocTable at;
	at["test"] = 1337;
	at["asdasd"] = 2137;
	cout << at["asdasd"] << " " << at["test"] << endl;
	return 0;
}

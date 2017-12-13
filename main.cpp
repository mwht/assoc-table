#include "AssocTable.hpp"
#include <iostream>

using namespace std;

int main() {
	AssocTable at;
	CIAssocTable ciat;
	at["test"] = 1337;
	at["asdasd"] = 2137;
	cout << at["asdasd"] << " " << at["test"] << endl;
	AssocTable at2 = at;
	cout << at2["test"] << endl;

	ciat["alamakota"] = 1488;
	cout << ciat["AlaMaKota"] << endl;

	CIAssocTable ciat2 = ciat;
	cout << ciat2["AlAmAkOtA"] << endl;
	return 0;
}

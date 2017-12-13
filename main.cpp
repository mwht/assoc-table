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
	cout << ciat["AlaMaKota"] << " " << ciat["ALAMAKOTA"] << endl;
	return 0;
}

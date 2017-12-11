#include "AssocTable.hpp"

AssocTable::AssocTable() {
	head = NULL; // create empty table
}

AssocTable::~AssocTable() {
	clear();
}

void AssocTable::clear() {
	node* current = head,*nextNode;
	while(current != NULL) {
		nextNode = current->next;
		delete current;
		current = nextNode;
	}
}

void AssocTable::insert(const char* key,int val) {
	node* newNode = new node(key);
	newNode->next = head;
	newNode->val = val;
	head = newNode;
}

AssocTable::node* AssocTable::find(const char* key) const {
	node* c = head;
	while(c) {
		if(!strcmp(key,c->key)) return c;
		c = c->next;
	}
	return NULL;
}	

int& AssocTable::operator[](const char* key) {
	node* n = find(key);
	if(!n) {
		insert(key,0);
		n = head;
	}
	return n->val;
}

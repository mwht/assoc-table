#include "AssocTable.hpp"
#define stricmp strcasecmp // workaround for g++
#include <cstring>

AssocTable::AssocTable() {
	head = NULL; // create empty table
}

AssocTable::~AssocTable() {
	clear();
}

void AssocTable::clear() {
	node* current,*nextNode;
	current = head;
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

int& AssocTable::find(const char* key, bool caseSensitive) {
	node* c = head;
	while(c) {
		if(caseSensitive) {
			if(!strcmp(key,c->key)) break;
		} else {
			if(!stricmp(key,c->key)) break;
		}
		c = c->next;
	}
	if(!c) {
		insert(key,0);
		c = head;
	}
	return c->val;
}

AssocTable::AssocTable (const AssocTable& asc)
{
  node *src, *dst;
  src = asc.head;
	dst = new node (*src);
	head = dst;
  while (src) {
		src = src->next;
		if(src == NULL) {
			dst->next = NULL;
			break;
		}
		dst->next = new node (*src);
		dst = dst->next;
  }
}

int& AssocTable::operator[](const char* key) {
	return find(key,true);
}

int& CIAssocTable::operator[](const char* key) {
	return find(key,false);

}

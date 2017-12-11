#ifndef __ASSOCTABLE_H_
#define __ASSOCTABLE_H_
#include <cstdlib>
#include <cstddef>
#include <cstring>

class AssocTable {
	private:
		struct node {
			node* next;
			char* key;
			int val;
			node(const char* m_key) {
				next = NULL;
				key = new char[strlen(m_key)+1];
				strcpy(key,m_key);
			}
			~node() {
				delete[] key;
			}
			node(const node& n) {
				if(n.key == NULL) key = NULL;
				else {
					key = new char[strlen(n.key)+1];
					strcpy(key,n.key);
				}
				val = n.val;
			}
			//private:
		};
		node* head;
		void insert(const char*,int);
		void clear();
		node* find(const char*) const;
		void swap(AssocTable&);
	public:
		AssocTable();
		AssocTable(const AssocTable&);
		~AssocTable();
		AssocTable& operator= (AssocTable&); 
		int& operator[](const char* key);
};

#endif // __ASSOCTABLE_H_

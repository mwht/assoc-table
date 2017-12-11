all: main

main: main.cpp AssocTable.cpp
	rm -f -- assoc-table
	g++ -g -Wall -pedantic -o assoc-table main.cpp AssocTable.cpp

.PHONY: clean

clean:
	rm assoc-table

#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;
class hashtable {
private:
	Employee** e;
	int size;
	int count;
	int collide;
public:
	hashtable(int);
	int hash(int);
	void insert(int, Employee);
	void remove(string);
	void print();
};
#pragma once

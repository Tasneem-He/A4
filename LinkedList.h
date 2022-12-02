#include <string>
#include <iostream>
#include "Employee.h"
#include <list>
using namespace std;




class HashTable {
private:
	static const int size = 9; 
	list<Employee> emp[size];
	int collide = 0;
public:
	bool empty();
	int hash(int);
	void insert1(int, Employee);
	void remove(int, string);
	void print();
};

#pragma once

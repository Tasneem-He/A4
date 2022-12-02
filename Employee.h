#include <string>
#include <iostream>
using namespace std;
class Employee {
private:
	string name;
	int age;
	int salary;
	int ExpYears;
public:
	Employee();
	Employee(string n, int a, int s, int E);
	void setname(string);
	void setage(int);
	void setsalary(int);
	void setexpr(int);
	string getName() const;
	int getAge();
	int getSalary();
	int getExp();

};
#pragma once

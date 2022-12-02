#include "Employee.h"

Employee::Employee() {
	name = "";
	age = 0;
	salary = 0;
	ExpYears = 0;
}
Employee::Employee(string n, int a, int s, int E) {
	name = n;
	age = a;
	salary = s;
	ExpYears = E;
}
void Employee::setname(string N)
{
	name = N;
}

void Employee::setage(int A)
{
	age = A;
}

void Employee::setsalary(int S)
{
	salary = S;
}

void Employee::setexpr(int E)
{
	ExpYears = E;
}

string Employee :: getName() const
{
	return name;
}
int Employee::getAge() {
	return age;
}
int Employee::getSalary() {
	return salary;
}
int Employee::getExp() {
	return ExpYears;
}

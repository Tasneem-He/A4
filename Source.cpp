#include "dynamicArray.h"
#include "Employee.h"
#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;
int main() {

	Employee a("Mina", 30, 10000, 4);
	Employee b("Fawzy", 44, 5000, 8);
	Employee c("Yara", 19, 2000, 0);
	Employee d("Mariam", 32, 8000, 2);
	Employee e("Ayman", 33, 4000, 8);
	Employee f("Roshdy", 28, 9000, 3);
	Employee g("Aya", 26, 6000, 3);
	Employee H("Abdallah", 29, 7000, 4);
	Employee i("Fatma", 21, 3000, 1);
	hashtable h(9);
	h.insert(a.getExp(), a);
	h.insert(b.getExp(), b);
	h.insert(c.getExp(), c);
	h.insert(d.getExp(), d);
	h.insert(e.getExp(), e);
	h.insert(f.getExp(), f);
	h.insert(g.getExp(), g);
	h.insert(H.getExp(), H);
	h.insert(i.getExp(), i);
	h.remove("Mina");
	h.print();
	cout << endl << endl << "==============================" << endl;
	cout << "Hash Table using chaining" << endl;
	cout << "============================" << endl;
	HashTable T;
	T.insert1(a.getExp(), a);
	T.insert1(b.getExp(), b);
	T.insert1(c.getExp(), c);
	T.insert1(d.getExp(), d);
	T.insert1(e.getExp(), e);
	T.insert1(f.getExp(), f);
	T.insert1(g.getExp(), g);
	T.insert1(H.getExp(), H);
	T.insert1(i.getExp(), i);
	T.remove(4, "Mina");
	T.print();
}
#include "dynamicArray.h"

hashtable::hashtable(int s)
{
	size = s;
	count = 0;
	collide = 0;
	e = new Employee * [size];

	for (int i = 0; i < size; i++)
	{
		*(e + i) = nullptr;
	}
}

int hashtable::hash(int i)
{
	int key = i % size;
	return key;
}

void hashtable::insert(int i, Employee x)
{
	if (count == size)
	{
		cout << "Cannot insert, Hash Table is Full" << endl;
		return;
	}
	int Key = hash(i);
	while ((*(e + Key)) != nullptr)
	{
		Key = (Key + 1) % size;
		collide++;
	}

	*(e + Key) = new Employee;
	(*(e + Key))->setname(x.getName());
	(*(e + Key))->setage(x.getAge());
	(*(e + Key))->setsalary(x.getSalary());
	(*(e + Key))->setexpr(x.getExp());

	count++;
}

void hashtable::remove(string n)
{
	
	int specifier = -1;
	if (count == 0)
	{
		cout << "Hash table is empty, there is nothing to remove " << endl;
		return;
	}
	for (int i = 0; i < size; i++)
	{
		
		if ((e[i]->getName()) == n)
		{
			specifier++;
			delete(*(e + i));
			*(e + i) = nullptr;
			break;
		}
	}
	if (specifier == -1)
	{
		cout << "Not found" << endl;
		return;
	}

}

void hashtable::print()
{
	for (int i = 0; i < size; i++)
	{
		if (*(e + i) == nullptr)
		{
			cout << "empty slot" << endl;
		}
		else
		{
			cout << (*(e + i))->getName() << endl;
		}
	}

	cout << "Colliding happened " << collide << " times";
}
// iteratory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Figura {
protected:
	int a;
public:
	virtual void setA(int) = 0;
};
class Trojkat : public Figura
{
private:
	int b;
public:
	int c;
	int getA() { return a; }
	int getB() { return b; }
	void setA(int val) { a = val; }
	void setB(int val) { b = val; }
	friend void pokaz(Trojkat);
};
class Kopia {
private:
	int a;
public:
	Kopia(int val) {
		a = val;
	}
	void setA(int val) { a = val; }
	int getA() { return a; }
	void poka() { cout << "a=" << a << endl; }
};
int silnia(int ile)
{
	if (ile<2)
		return 1; //silnia z 0 i 1 wynosi 1
	return ile*silnia(ile - 1); //wywo³anie funkcji przez sam¹ siebie ze zmniejszonym argumentem
}
int main()
{
	
	vector<int> a;
	a.push_back(10);
	a.push_back(15);

	for (auto i : a) {
		cout << i << endl;
	}

	getchar();
	return 0;

	Kopia q(5);
	q.poka();

	Kopia w(q);
	w.setA(15);
	w.poka();

	getchar();

	return 0;

	Trojkat abc;
	abc.setA(5);
	abc.setB(10);
	pokaz(abc);

	Trojkat *def = new Trojkat();
	def->setA(11);
	def->setB(12);
	pokaz(*def);
	cout << "wielkosc=" << sizeof(abc) << endl;
	cout << "wielkosc=" << sizeof(int) << endl;
	cout << "wielkosc=" << sizeof(float) << endl;
	cout << "wielkosc=" << sizeof(double) << endl;


	int ile = 5;
	cout << ile << "!=" << silnia(ile);

	getchar();
	delete def;
	return 0;
}

void pokaz(Trojkat tr) {
	cout << "a=" << tr.getA() << " b=" << tr.getB() << endl;
}
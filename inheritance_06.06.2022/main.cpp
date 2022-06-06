#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "A " << this << " created\n";
	}
	A(int a) :value(a) {

	}
	virtual ~A() {
		cout << "A " << this << " destroied\n";
	}
	int value;
	void f00() {
		cout << "some work!\n";
	}
};

class B:public A {
public:
	B():A() {
		cout << "B " << this << " created\n";
		f = new double;
	}
	B(int a) :A(a) {
		cout << "B " << this << " created\n";
		//value = a;
		f = new double;
	}
	virtual ~B() {
		cout << "B " << this << " destroied\n";
		delete f;
	}
	void f01() {
		cout << "some B style work\n";
	}
	double *f;
};

int main() {

	A a;
	A();
	B d;
	B* pd = new B(5);

	delete pd;
	B* pd2 = new B(8);
	pd2->f00();
	delete pd2;

	return 0;
}
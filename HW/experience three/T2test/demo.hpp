#pragma once
#include <iostream>
#include "clock.hpp"
#include "box.hpp"
using namespace std;

class Demo {
public:
	Demo(int xv = 0, int hv = 0, int mv = 0, int sv = 0) :x(xv, mv, sv), y(hv, mv, sv) {
		cout << "Demo-Constructor1." << endl;
	}
	Demo(const Clock& aclock,const box& abox) :y(aclock), x(abox) {
		cout << "Demo-Constructor2." << endl;
	}
	Demo(const Demo& other) {
		cout << "Demo-Copy Constructor." << endl;
	}
	Clock getclock() { return y; }
	box getbox() { return x; }
	~Demo() {
		cout << "Demo-Destructor." << endl;
	}
public:
	Clock y;
	box x;
};
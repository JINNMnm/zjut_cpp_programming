#include<iostream>
#include "clock.hpp"
#include "demo.hpp"
using namespace std;
void fun1(Clock xclock) {
	xclock.reset();
}
Demo fun2(Demo xDemo) {
	xDemo.getclock().reset();
	return xDemo;
}
int main()
{
    Clock  aclock(8, 34, 45), bclock(aclock);//Êä³öim a clock:8:34:45 endl im a copy clock:8:34:45
	box  abox, bbox(20, 30);//output: im a box:10-10-10 endl im a box 20-30-10
	Demo ademo(1, 2, 3, 4), bdemo(ademo), cdemo(abox, aclock), ddemo(3, 4);//output:im a clock
	Clock *pclock;
	box  *pbox;
	Demo *pDemo;
	pclock = new Clock(6, 7, 8);
	pbox = new box(cdemo.getbox());
	pDemo = new Demo[2]{ Demo(6,7,8,9),Demo(bbox,bclock) };
	fun1(*pclock);
	fun2(pDemo[1]);
	delete pclock;
	delete[]pDemo;
	delete pbox;
	return 0;
}

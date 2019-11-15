
//#include <iostream>
//#include<string>
//#include<bits/stdc++.h>
//#include"test.h"
//using namespace std;
//
// string& operator+( string& s,int value) {
//	 s = s + to_string(value);
//	return s;
//}
//
//int main()
//{
//	test * t = new test();
//	string s = "my age is ";
//	int age = 23;
//	cout << s + age + " years";
//	return 0;
//}
////
#include <iostream>
using std::cout;
using std::endl;
class base {
public:
	virtual void shownumber(int i = 42) {
		cout << "the answer to life, the universe and everything: " << endl
			<< i << endl;
	}
 };

class derived : public base {
public:
	void shownumber(int i = 0) {
		cout << i << "! always " << i << endl;
	}
 };

int main() {
	/*base b;
	derived d;

	base* pb = &b;
	pb->shownumber();

	pb = &d;
	pb->shownumber();

	derived* pd = &d;
	pd->shownumber();*/
	unsigned short a = 0;
	unsigned short b = 5;
	unsigned short c = 10;
	a = b - c;
	cout << sizeof(a);
	cout << a;
}
//#include <iostream>
//using std::cout;
//using std::endl;
//
//class Base {
//	virtual void doShowNumber(int i) {
//		cout << "The answer to life, the universe and everything: " << endl
//			<< i << endl;
//	}
//public:
//	void showNumber(int i = 42) {
//		doShowNumber(i);
//	}
//};
//
//class Derived : public Base {
//	void doShowNumber(int i) {
//		cout << i << "! always " << i << endl;
//	}
//};
//
//int main() {
//	Base b;
//	Derived d;
//
//	Base* pb = &b;
//	pb->showNumber();
//
//	pb = &d;
//	pb->showNumber();
//
//	Derived* pd = &d;
//	pd->showNumber();
//}


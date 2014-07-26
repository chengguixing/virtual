// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>

using namespace std;

class Base1 {
public:
	int ibase1;
	Base1() :ibase1(10) {}
	virtual void f() { cout << "Base1::f()" << endl; }
	virtual void g() { cout << "Base1::g()" << endl; }
	virtual void h() { cout << "Base1::h()" << endl; }

};

class Base2 {
public:
	int ibase2;
	Base2() :ibase2(20) {}
	virtual void f() { cout << "Base2::f()" << endl; }
	virtual void g() { cout << "Base2::g()" << endl; }
	virtual void h() { cout << "Base2::h()" << endl; }
};

class Base3 {
public:
	int ibase3;
	Base3() :ibase3(30) {}
	virtual void f() { cout << "Base3::f()" << endl; }
	virtual void g() { cout << "Base3::g()" << endl; }
	virtual void h() { cout << "Base3::h()" << endl; }
};
class Derive : public Base1, public Base2, public Base3 {
public:
	int iderive;
	Derive() :iderive(100) {}
	virtual void f() { cout << "Derive::f()" << endl; }
	virtual void g1() { cout << "Derive::g1()" << endl; }
};
// TODO:  在此处引用程序需要的其他头文件

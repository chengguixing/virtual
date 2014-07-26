// virtual4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

typedef void(*Fun)(void);

int main()
{
	int** pVtab = NULL;
	Fun pFun = NULL;


	D dd;

	pVtab = (int**)&dd;
	cout << "[0] D::B1::_vptr->" << endl;
	pFun = (Fun)pVtab[0][0];
	cout << "     [0] ";    pFun(); //D::f1();
	pFun = (Fun)pVtab[0][1];
	cout << "     [1] ";    pFun(); //B1::Bf1();
	pFun = (Fun)pVtab[0][2];
	cout << "     [2] ";    pFun(); //D::Df();
	pFun = (Fun)pVtab[0][3];
	cout << "     [3] ";
	cout << pFun << endl;

	//cout << pVtab[4][2] << endl;
	cout << "[1] = 0x";
	cout << (int*)((&dd) + 1) << endl; //????

	cout << "[2] B1::ib1 = ";
	cout << *((int*)(&dd) + 2) << endl; //B1::ib1
	cout << "[3] B1::cb1 = ";
	cout << (char)*((int*)(&dd) + 3) << endl; //B1::cb1

	//---------------------
	cout << "[4] D::B2::_vptr->" << endl;
	pFun = (Fun)pVtab[4][0];
	cout << "     [0] ";    pFun(); //D::f2();
	pFun = (Fun)pVtab[4][1];
	cout << "     [1] ";    pFun(); //B2::Bf2();
	pFun = (Fun)pVtab[4][2];
	cout << "     [2] ";
	cout << pFun << endl;

	cout << "[5] = 0x";
	cout << *((int*)(&dd) + 5) << endl; // ???

	cout << "[6] B2::ib2 = ";
	cout << (int)*((int*)(&dd) + 6) << endl; //B2::ib2
	cout << "[7] B2::cb2 = ";
	cout << (char)*((int*)(&dd) + 7) << endl; //B2::cb2

	cout << "[8] D::id = ";
	cout << *((int*)(&dd) + 8) << endl; //D::id
	cout << "[9] D::cd = ";
	cout << (char)*((int*)(&dd) + 9) << endl;//D::cd

	cout << "[10]  = 0x";
	cout << (int*)*((int*)(&dd) + 10) << endl;
	//---------------------
	cout << "[11] D::B::_vptr->" << endl;
	pFun = (Fun)pVtab[11][0];
	cout << "     [0] ";    pFun(); //D::f();
	pFun = (Fun)pVtab[11][1];
	cout << "     [1] ";    pFun(); //B::Bf();
	pFun = (Fun)pVtab[11][2];
	cout << "     [2] ";
	cout << pFun << endl;

	cout << "[12] B::ib = ";
	cout << *((int*)(&dd) + 12) << endl; //B::ib
	cout << "[13] B::cb = ";
	cout << (char)*((int*)(&dd) + 13) << endl;//B::cb
	system("PAUSE");
	return 0;
}


// virtual3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

typedef void(*Fun)(void);
int main()
{
	int** pVtab = NULL;
	Fun pFun = NULL;

	D d;
	pVtab = (int**)&d;
	cout << "[0] D::B1::_vptr->" << endl;
	pFun = (Fun)pVtab[0][0];
	cout << "     [0] ";    pFun();
	pFun = (Fun)pVtab[0][1];
	cout << "     [1] ";    pFun();
	pFun = (Fun)pVtab[0][2];
	cout << "     [2] ";    pFun();
	pFun = (Fun)pVtab[0][3];
	cout << "     [3] ";    pFun();
	pFun = (Fun)pVtab[0][4];
	cout << "     [4] ";    pFun();
	pFun = (Fun)pVtab[0][5];
	cout << "     [5] 0x" << pFun << endl;

	cout << "[1] B::ib = " << (int)pVtab[1] << endl;
	cout << "[2] B::cb = " << (char)pVtab[2] << endl;
	cout << "[3] B1::ib1 = " << (int)pVtab[3] << endl;
	cout << "[4] B1::cb1 = " << (char)pVtab[4] << endl;

	cout << "[5] D::B2::_vptr->" << endl;
	pFun = (Fun)pVtab[5][0];
	cout << "     [0] ";    pFun();
	pFun = (Fun)pVtab[5][1];
	cout << "     [1] ";    pFun();
	pFun = (Fun)pVtab[5][2];
	cout << "     [2] ";    pFun();
	pFun = (Fun)pVtab[5][3];
	cout << "     [3] ";    pFun();
	pFun = (Fun)pVtab[5][4];
	cout << "     [4] 0x" << pFun << endl;

	cout << "[6] B::ib = " << (int)pVtab[6] << endl;
	cout << "[7] B::cb = " << (char)pVtab[7] << endl;
	cout << "[8] B2::ib2 = " << (int)pVtab[8] << endl;
	cout << "[9] B2::cb2 = " << (char)pVtab[9] << endl;

	cout << "[10] D::id = " << (int)pVtab[10] << endl;
	cout << "[11] D::cd = " << (char)pVtab[11] << endl;
	system("PAUSE");
	return 0;
}


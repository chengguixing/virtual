// visual2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
typedef void(*Fun)(void);
int main()
{
	Derive d;
	Fun pFun;
	int** pVtab = (int**)&d;
	cout << "[0] Base1::_vptr->" << endl;
	pFun = (Fun)pVtab[0][0];
	cout << "     [0] ";
	pFun();

	pFun = (Fun)pVtab[0][1];
	cout << "     [1] "; pFun();

	pFun = (Fun)pVtab[0][2];
	cout << "     [2] "; pFun();

	pFun = (Fun)pVtab[0][3];
	cout << "     [3] "; pFun();

	pFun = (Fun)pVtab[0][4];
	cout << "     [4] "; cout << pFun << endl;

	cout << "[1] Base1.ibase1 = " << (int)pVtab[1] << endl;


	int s = sizeof(Base1) / 4;

	cout << "[" << s << "] Base2::_vptr->" << endl;
	pFun = (Fun)pVtab[s][0];
	cout << "     [0] "; pFun();

	pFun = (Fun)pVtab[s][1];
	cout << "     [1] "; pFun();

	pFun = (Fun)pVtab[s][2];
	cout << "     [2] "; pFun();

	pFun = (Fun)pVtab[s][3];
	cout << "     [3] ";
	cout << pFun << endl;

	cout << "[" << s + 1 << "] Base2.ibase2 = " << (int)pVtab[s + 1] << endl;

	s = s + sizeof(Base2) / 4;

	cout << "[" << s << "] Base3::_vptr->" << endl;
	pFun = (Fun)pVtab[s][0];
	cout << "     [0] "; pFun();

	pFun = (Fun)pVtab[s][1];
	cout << "     [1] "; pFun();

	pFun = (Fun)pVtab[s][2];
	cout << "     [2] "; pFun();

	pFun = (Fun)pVtab[s][3];
	cout << "     [3] ";
	cout << pFun << endl;

	s++;
	cout << "[" << s << "] Base3.ibase3 = " << (int)pVtab[s] << endl;
	s++;
	cout << "[" << s << "] Derive.iderive = " << (int)pVtab[s] << endl;

	system("PAUSE");
	return 0;
}


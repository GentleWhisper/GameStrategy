#include "helper.h"

#include <locale>

using std::cout;
using std::cin;

int main() {
	setlocale(0, "rus");
	cout << "ֲגוהטעו טלÿ פאיכא\n";
	string input;
	cin >> input;
	double fA, fB;
	double solveA[5] = {0,0,0,0,0};
	double solveB[4] = {0,0,0,0};


	SimplexA simplexA(input);
	std::cout << simplexA << "\n";
	simplexA.solve(fA, solveA);
	

	SimplexB simplexB(input);
	std::cout << simplexB << "\n";
	simplexB.solve(fB, solveB);

	Strategy(solveA, fA, solveB, fB);



	system("pause");
	return 0;
}
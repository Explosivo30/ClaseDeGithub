// ConstVSDefine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define A 10
#define B 5
#define max(a,b) ((a > b) ? a : b)
//#define DEBUG_MODE

int maxWithoutDefine(int a, int b) {
	return (a > b) ? a : b;
}

int foo() {
	//No puedo porque define ya es A lo que hace es que lo que sea A sola y mayuscula escribira 10 entonces eso es 10= 90 y ese error tambine pasaria con 5=6
	//int A = 90;
	return 0;
}

int main()
{
	const int C = 3;

	int result = A + B;

#ifdef DEBUG_MODE
	std::cout << result << std::endl;

#endif // DEBUG_MODE


	int x = 1;
	int y = 2;
	std::cout << max(++x, ++y) << std::endl;

	result = B * A;
	

	result = C * A;
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

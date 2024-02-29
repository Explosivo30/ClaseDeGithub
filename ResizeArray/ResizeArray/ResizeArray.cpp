// ResizeArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Dynamic array -> Pointer To Array
//capacity -> Size of dynamicArray
int* resizeToDoubleCapacityArray(int* oldArray, int capacity) {
	//Create new Array
	int* newArray = new int[capacity * 2];

	//Copy values to new Array
	for (int i = 0; i < capacity * 2; ++i) {
		if (i < capacity) {
			newArray[i] = oldArray[i];
		}
		else
		{
			//[5...9]
			newArray[i] = 7;
		}
	}
	delete[] oldArray;
	oldArray = nullptr;
	return newArray;
}

int main()
{
	int dynamicSize;
	std::cout << "Enter array size !" << std::endl;
	std::cin >> dynamicSize;

	int* dynamicArray1D = new int[dynamicSize];
	for (int i = 0; i < dynamicSize; i++) {
		dynamicArray1D[i] = i;
	}

	for (int i = 0; i < dynamicSize; ++i)
	{
		std::cout << dynamicArray1D[i] << " ";
	}

	int oldDynamicSize = dynamicSize;
	std::cout << std::endl;
	std::cout << "Enter new Size" << std::endl;
	std::cin >> dynamicSize;
	std::cout << dynamicSize << std::endl;

	int* newArray = resizeToDoubleCapacityArray(dynamicArray1D, oldDynamicSize);

	for (int i = 0; i < dynamicSize; i++)
	{
		std::cout << newArray[i];
	}
	/*
	for (int i = 0; i < dynamicSize; ++i) {
		//CRASH or undefined behaviour
		//dynamicArray1D[i] = i;
	}
	*/

	//Delete original array
	//delete[] dynamicArray1D;//Los corchetes es porque es una array
	//dynamicArray1D = nullptr;
	//Como esta borrado podemos hacer un resize del array sin memory leak
	//dynamicArray1D = new int[dynamicSize];

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

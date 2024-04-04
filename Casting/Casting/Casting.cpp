// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


enum class CarType {
	CAR,
	SCOOTER,
	COUNT
};

struct Fruit {
	std::string name;
	int size;

	Fruit(){
		name = "Invalid";
	}
};

int main()
{
	//C-Style casting
	float myFloat = 1.43564f;
	int myInt0 = static_cast<int>(myFloat);
	int myInt = (int)myFloat;
	int myInt2 = int(myFloat);

	//C++ Style casting
	//C++ static_cast
	float myFloat2 = 1.43564f;
	int myInt3 = static_cast<int>(myFloat);

	int i = static_cast<int>(CarType::CAR);//C++
	int i2 = (int)(CarType::CAR);//C No es del todo seguro preferible usar el de c++

	
	//char c = 'a';
	//int* p = (int*)&c;
	//*p = 5;
	//int* p1 = static_cast<int*>(&c); //Esto es ta mal y el compilador te lo muestra con este cast de c++
	//int b = 2;
	//int* pointerToB = &b;

	//const cast

	Fruit f; //Stack
	const Fruit* f1 = new Fruit(); //Heap
	//f1->name = "kiwi"; //Esto es const
	Fruit* nonConstFruit = const_cast<Fruit*>(f1);
	nonConstFruit->name = "Kiwi";

	//reinterpret_cast
	int* pointer = nullptr; // Se guardan direcciones de memoria
	int value = 5; //Se guarda un entero
	//value = pointer;
	//value = static_cast<int>(pointer);
	value = reinterpret_cast<int>(pointer); //No compile errors

	Fruit* frutal = new Fruit();
	//frutal = reinterpret_cast<Fruit*>


}

// CRUD VECTOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

struct Student
{
    int m_Dni;
    std::string name;


    Student(int dni) {
        m_Dni = dni;
        name = "DUMMY";


    }
};


int main()
{
    //CREATE
    std::vector<int> myIntVector = { 10,5,20,50 };
    std::vector<float> myFloatVector(10,-3.4f);
    std::vector<Student> myStudents;
    Student s1(12314141242);
    Student s2(20384948242);
    //myStudents.push_back(s1);

    //READ
    
    for (int i = 0; i < myFloatVector.size(); ++i) {
        std::cout << myFloatVector[i] << " ";

    }
    std::cout << std::endl;

    for (int i = 0; i < myStudents.size(); ++i) {
        std::cout << myStudents[i].m_Dni << " ";
        std::cout << myStudents[i].name << " ";
        std::cout << std::endl;
    }
    

    std::cout << myIntVector.size();    //El 4 sale de aqui
    std::cout << std::endl;
    //UPDATE
    //myIntVector[3] = -57;
    //myIntVector.resize(2);
    std::vector<int>::iterator it = myIntVector.begin();//begin es donde empieza v.end() es despues de cuando acaba
    ++it;//Tambien puedes hacer esto para ponerlo por delante del 10 aun asi luego tendras que resetear donde apunta
    it = myIntVector.insert(it, 5); //Inserta el 5 y resetea el apuntado para que deje de apuntar al 10;//Esto hace que empiece en la pos del 5

    //Aparte de insertar puedes quitar con el erase myIntVector.erase(it,1);
    //Por lo que si no es el primero no veras el primero o los primeros numeros;
    std::sort(myIntVector.begin(), myIntVector.end());

    //forma estandar de patear todos los elementos
    /*Esto hace que empiece por el principio y resetea it*/
    for (it = myIntVector.begin(); it < myIntVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    for (int elem : myIntVector) {//No indices para el for base range loop
        std::cout << elem;
    }

    //DELETE

    myFloatVector.pop_back();

    //C --> CREATE
    //R --> READ
    //U --> UPDATE
    //D --> DELETE

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

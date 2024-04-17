#pragma once
#include <iostream>

struct Wheel {
    int radius;
    float friction;
};

class Car {
    static const int NUM_WHEELS = 4;


    //Atributes(non static)
    Wheel* m_wheels = nullptr;
    int m_color;
    std::string m_model;
    bool m_isElectric;

public:
    Car();

    Car(int numWheels);
    

    //Methods
    //Constructor
    Car(int numWheels, int color, std::string model, bool isElectric);
    

    //Getters / Setters
    int GetColor();
    float GetAverageFriction();
    //Setter
    void SetColor(int color);

    ~Car();
};
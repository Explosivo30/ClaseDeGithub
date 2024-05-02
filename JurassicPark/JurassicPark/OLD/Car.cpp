#include "Car.h"

//:: -> resolution scope operator

Car::Car() 
{

}

Car::Car(int numWheels)
{
    m_wheels = new Wheel[numWheels];
}


Car::Car(int numWheels, int color, std::string model, bool isElectric)
//Esta parte de aqui
    :m_color(color)
    , m_model(model)
    , m_isElectric(isElectric)
    //Y esta parte de abajo es lo mismo es una forma distinta de definir un constructor
{
    m_wheels = new Wheel[numWheels];
    m_color = color;
    m_model = model;
    m_isElectric = isElectric;


    //El warning es "No hemos inicializado los atributos"    
}


Car::~Car()
{
    if (m_wheels != nullptr)//Hago esta comprobacion para saber si he seteado las ruedas en algun momento si no lo he hecho petara
        delete m_wheels;
}


int Car::GetColor() {
    return m_color;
}

void Car::SetColor(int color)
{
    m_color = color;
}

float Car::GetAverageFriction()
{
    float sumFriction = 0.0f;

    for (int i = 0; i < NUM_WHEELS; ++i) {
        sumFriction += m_wheels[i].friction;
    }

    return sumFriction/NUM_WHEELS;
}
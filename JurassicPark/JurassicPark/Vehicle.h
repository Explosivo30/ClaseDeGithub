#pragma once
#include <iostream>
#include <vector>
#include "Scientist.h"

enum class SeatType
{
    TWO,
    FIVE,
    SEVEN,
    COUNT
};

class Scientist;
class Vehicle
{
private:
    int m_color;
    std::string m_model;
    bool m_isElectric;
    SeatType m_seatType;

    std::vector<Scientist*> m_scientists;

public:
    Vehicle(const SeatType seatType, const int color, const std::string model, const bool isElectric);

    int GetColor() const;
    void SetColor(int color);

    int GetNumSeats() const;
    bool IsFull() const;
    void RegisterScientistToVehicle(Scientist& scientist);
    // Destructor
    ~Vehicle();
};


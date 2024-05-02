#include "Vehicle.h"

Vehicle::Vehicle(const SeatType seatType, const int color, const std::string model, const bool isElectric)
// Option 2
: m_color(color)
, m_model(model)
, m_isElectric(isElectric)
, m_seatType(seatType)
{
    // Option 
    //m_color = color;
    //m_model = model;
    //m_isElectric = isElectric;
    //m_seatType = seatType;
}

int Vehicle::GetColor() const
{
    return m_color;
}

void Vehicle::SetColor(int color)
{
    m_color = color;
}

bool Vehicle::IsFull() const
{
    return GetNumSeats() <= m_scientists.size();
}


void Vehicle::RegisterScientistToVehicle(Scientist& scientist)
{
    m_scientists.push_back(&scientist);
}

int Vehicle::GetNumSeats() const
{
    int numSeats = -1;
    switch(m_seatType)
    {
        case SeatType::TWO:
        {
            numSeats = 2;
            break;
        }
        case SeatType::FIVE:
        {
            numSeats = 5;
            break;
        }
        case SeatType::SEVEN:
        {
            numSeats = 7;
            break;
        }
        default:
            break;
    }
    return numSeats;
}

Vehicle::~Vehicle()
{

}

#include "Park.h"

Park::Park(float dimX, float dimY, int numScientists, int numDynosaurs, int numVehicles)
	: m_dimX(dimX)
	, m_dimY(dimY)
	, m_numScientists(numScientists)
	, m_numDynosaurs(numDynosaurs)
	, m_numVehicles(numVehicles)
{
	initializeDynosaurs();
	initializeScientists();
	initializeCars();
}

void Park::initializeDynosaurs()
{
	for (int i = 0; i < m_numDynosaurs; ++i)
	{
		m_dynosaurs.push_back(Dynosaur());
	}
}

void Park::initializeScientists()
{
	for (int i = 0; i < m_numScientists; ++i)
	{
		m_scientists.push_back(Scientist());
	}
}

void Park::initializeCars()
{
	// TODO: Initialize m_vehicles
	for (int i = 0; i < m_numVehicles; ++i)
	{
		const int randomSeats = rand() % static_cast<int>(SeatType::COUNT);
		const SeatType seatType = static_cast<SeatType>(randomSeats);
		m_vehicles.push_back(Vehicle(seatType, 0, "", false));
	}
}

void Park::assignVehiclesToScientists()
{
	for (int i = 0; i < m_vehicles.size(); ++i)
	{
		Vehicle& vehicle = m_vehicles[i];
		for (int j = 0; j < m_scientists.size() && !vehicle.IsFull(); ++j)
		{
			vehicle.RegisterScientistToVehicle(m_scientists[j]);
		}
	}
}

float Park::CalculateDistance(const Position2D& pos1, const Position2D& pos2) const
{
	return sqrt(pow(pos1.x - pos2.x, 2)
		+ pow(pos1.y - pos2.y, 2));
}

std::vector<Scientist> Park::GetScientistsInDanger() const
{
	std::vector<Scientist> scientistsInDanger;
	for (int i = 0; i < m_scientists.size(); ++i)
	{
		for (const Dynosaur& dynosaur : m_dynosaurs)
		{
			const Position2D scientistPos = m_scientists[i].GetPos();
			const Position2D dynosaurPos = dynosaur.GetPos();

			const float distance = CalculateDistance(scientistPos, dynosaurPos);
			if (distance < RISK_RANGE_DISTANCE)
			{
				scientistsInDanger.push_back(m_scientists[i]);
			}

		}
	}
	return scientistsInDanger;
}

void Park::UpdateDynosaurs()
{
	for (Dynosaur& dynosaur : m_dynosaurs)
	{
		const Position2D pos = dynosaur.GetPos();
		float newPosX = pos.x + static_cast<float>(rand() % 2);
		float newPosY = pos.y + static_cast<float>(rand() % 2);

		newPosX = (newPosX >= 0.0f) ? newPosX : pos.x;
		newPosX = (newPosX < m_dimX) ? newPosX : pos.x;

		newPosY = (newPosY >= 0.0f) ? newPosY : pos.y;
		newPosY = (newPosY < m_dimY) ? newPosY : pos.y;

		dynosaur.SetPos(Position2D(newPosX, newPosY));
	}
}

void Park::UpdateScientists()
{
	for (Scientist& scientist : m_scientists)
	{
		const Position2D pos = scientist.GetPos();
		float newPosX = pos.x + static_cast<float>(rand() % 2);
		float newPosY = pos.y + static_cast<float>(rand() % 2);
		
		newPosX = (newPosX >= 0.0f) ? newPosX : pos.x;
		newPosX = (newPosX < m_dimX) ? newPosX : pos.x;
		
		newPosY = (newPosY >= 0.0f) ? newPosY : pos.y;
		newPosY = (newPosY < m_dimY) ? newPosY : pos.y;

		scientist.SetPos(Position2D(newPosX, newPosY));
	}
}

void Park::Update()
{
	UpdateDynosaurs();
	UpdateScientists();
}

void Park::Print() const
{
	// TODO: Print dynosaurs, scientists, park params, etc
}
#pragma once

#include "Util.h"
#include "Vehicle.h"

class Vehicle;

class Scientist
{
private:
	Position2D m_pos;
	bool m_isDead = false;
	Vehicle* m_assignedVehicle = nullptr;

public:
	Scientist(){}
	Scientist(const Position2D pos);

	Position2D GetPos() const;
	void SetPos(const Position2D pos);
	bool IsDead() const;

	void AssignVehicle(Vehicle* vehicle);
};


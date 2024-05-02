#include "Scientist.h"

Scientist::Scientist(const Position2D pos) {
	m_pos = pos;
};

Position2D Scientist::GetPos() const
{
	return m_pos;
}

void Scientist::SetPos(const Position2D pos)
{
	m_pos = pos;
}

bool Scientist::IsDead() const
{
	return m_isDead;
}

void Scientist::AssignVehicle(Vehicle* vehicle)
{
	m_assignedVehicle = vehicle;
}

#include "Dynosaur.h"

Position2D Dynosaur::GetPos() const
{
	return m_pos;
}

void Dynosaur::SetPos(const Position2D pos)
{
	m_pos = pos;
}

bool Dynosaur::GetIsDangerous() const
{
	return m_isDangerous;
}
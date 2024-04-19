#pragma once
#include "Util.h"
class Scientist
{
private:

	Position2D m_pos;
	bool m_isDead = false;

public:

	Scientist(const Position2D pos);

	Position2D GetPos() const {//El const al final hace que no puedas cambiar las variables aqui dentro 
		//por lo que no podrias hacer un m_health = 4; por ejemplo
		return m_pos;
	}

};


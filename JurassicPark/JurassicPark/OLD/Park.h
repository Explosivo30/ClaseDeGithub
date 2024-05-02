#pragma once
#include <vector>
#include "Constants.h"
#include "Dynosaur.h"
#include "Scientist.h"

class Park
{
private:
	std::vector<Scientist> m_scientist;
	std::vector<Dynosaur> m_dynosaur;

	float CalculateDistance(const Position2D& pos1, const Position2D& pos2) const;

public:
	//TO-DO
	//Have access Dynosaur and Scentist positions
	//Dynosaur: Access to m_isDangerous
	// Scientist: Access to m_isDead
	std::vector<Scientist> GetScientistInDanger()const;
};


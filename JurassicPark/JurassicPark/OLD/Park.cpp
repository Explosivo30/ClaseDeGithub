#include "Park.h"
std::vector<Scientist> Park::GetScientistInDanger() const {
	
	std::vector<Scientist> scientistInDanger;

	for (int i = 0; i < m_scientist.size(); i++) 
	{
		for (const Dynosaur& dynosaur : m_dynosaur) {

			const Position2D scientistPos = m_scientist[i].GetPos();
			const Position2D dynosaurPos = dynosaur.GetPos();

			const float distance = CalculateDistance(dynosaurPos, scientistPos);

			if (distance < RISK_RANGE_DISTANCE) {
				scientistInDanger.push_back(m_scientist[i]);

			}
		}
	}

	return scientistInDanger; 
}


float Park::CalculateDistance(const Position2D& pos1, const Position2D& pos2) const {
	const float distance = sqrt(pow(pos1.x - pos2.x, 2) +
		pow(pos1.y - pos2.y, 2));

	return distance;
}
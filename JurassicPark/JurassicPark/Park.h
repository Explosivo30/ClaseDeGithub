#pragma once
#include <vector>
#include "Constants.h"
#include "Dynosaur.h"
#include "Scientist.h"
#include "Vehicle.h"

class Park
{
public:
	static const int juan = 5;//STATIC HACE QUE LA VARIABLE SEA VISIBLE SIN NECESIDAD DE TENERLA INICIALIZADO UN OBJETO
private:
	float m_dimX;
	float m_dimY;
	int m_numScientists;
	int m_numDynosaurs;
	int m_numVehicles;

	std::vector<Scientist> m_scientists;
	std::vector<Dynosaur> m_dynosaurs;
	std::vector<Vehicle> m_vehicles;

	float CalculateDistance(const Position2D& pos1, const Position2D& pos2) const;
	std::vector<Scientist> GetScientistsInDanger() const;
	
	void initializeDynosaurs();
	void initializeScientists();
	void initializeCars();
	void assignVehiclesToScientists();

	void UpdateDynosaurs();
	void UpdateScientists();

public:
	Park(float dimX, float dimY, int numScientists, int numDynosaurs, int numVehicles);
	void Update();
	void Print() const;
};


#pragma once
#include <iostream>
#include "Util.h"

class Dynosaur
{
private:
	std::string m_name; // Miembros de la clase, atributos privados
	int m_health;
	std::string m_adn;
	Position2D m_pos;
	bool m_isDangerous;

public:
	// Atributos publicos
private:
	// Metodos privados
public:
	// Metodos publicos
	Position2D GetPos() const;
	void SetPos(const Position2D pos);
	bool GetIsDangerous() const;
};


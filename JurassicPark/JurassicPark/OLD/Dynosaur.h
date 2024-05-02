#pragma once
#include <iostream>
#include "Util.h"
class Dynosaur
{
private: // atributo privado;
	std::string m_name;
	int m_health;
	std::string m_adn;
	Position2D m_pos;
	bool m_isDangerous;

	// atributo publico;
public://Puedes tener mas de un public: o private:

private://Metodo privado

public: //Metodo publico
	Position2D GetPos() const {//El const al final hace que no puedas cambiar las variables aqui dentro 
		//por lo que no podrias hacer un m_health = 4; por ejemplo
		return m_pos;
	}

	bool GetIsDangerous() const {
		return m_isDangerous;
	}
};


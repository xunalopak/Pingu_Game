//
// Created by Romain on 13/02/2023.
//

#include "Minion.hpp"

Minion::Minion() = default;

Minion::Minion(unsigned int id, unsigned int hp, unsigned int damage, unsigned int armor, const std::string name) : Pingu(id, hp, damage, armor, name) {

}

Minion::Minion(const Minion& minion) : Pingu(minion) {

}

Minion::~Minion() = default;

Minion& Minion::operator=(const Minion& minion) {
	Pingu::operator=(minion);
	return *this;
}

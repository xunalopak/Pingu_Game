//
// Created by Romain on 13/02/2023.
//

#include "../main.hpp"

#ifndef PINGU_GAME_MINION_HPP
# define PINGU_GAME_MINION_HPP

class Minion : public Pingu{
private:

public:
	Minion();
	Minion(unsigned int id, unsigned int hp, unsigned int damage, unsigned int armor, const std::string name);
	Minion(const Minion& minion);
	~Minion();
	Minion& operator=(const Minion& minion);

};

#endif //PINGU_GAME_MINION_HPP
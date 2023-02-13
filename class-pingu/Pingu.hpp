//
// Created by Romain on 13/02/2023.
//

#include "../main.hpp"

#ifndef PINGU_GAME_PINGU_HPP
# define PINGU_GAME_PINGU_HPP

class Pingu {
protected:
	unsigned int _id;
	unsigned int _hp;
	unsigned int _damage;
	unsigned int _armor; // damage reduction in %
	unsigned int _regeneration; // regeneration per turn in %
	const std::string _name;
	const std::string _type;


public:
	Pingu();
	Pingu(unsigned int id, unsigned int hp, unsigned int damage, unsigned int armor, const std::string name);
	Pingu(const Pingu& pingu);
	virtual ~Pingu() = 0;
	Pingu& operator=(const Pingu& pingu);

	virtual void attack(Pingu& pingu);
	virtual void take_damage(unsigned int damage);
	virtual void heal(unsigned int heal);
	virtual void regenerate();
	virtual void die();

	virtual unsigned int get_id() const;
	virtual unsigned int get_hp() const;
	virtual unsigned int get_damage() const;
	virtual unsigned int get_armor() const;
	virtual const std::string get_name() const;
	virtual const std::string get_type() const;
};

#endif //PINGU_GAME_PINGU_HPP

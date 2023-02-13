//
// Created by Romain on 13/02/2023.
//

#include "Pingu.hpp"

Pingu::Pingu() : _id(0), _hp(0), _damage(0), _armor(0), _name("Pingu") {}

Pingu::Pingu(unsigned int id, unsigned int hp, unsigned int damage, unsigned int armor, const std::string name) : _id(id), _hp(hp), _damage(damage), _armor(armor), _name(name) {}

Pingu::Pingu(const Pingu& pingu) : _id(pingu._id), _hp(pingu._hp), _damage(pingu._damage), _armor(pingu._armor), _name(pingu._name) {}

Pingu::~Pingu() = default;

Pingu& Pingu::operator=(const Pingu& pingu) {
	_id = pingu._id;
	_hp = pingu._hp;
	_damage = pingu._damage;
	_armor = pingu._armor;
	(std::string)_name = pingu._name;
	return *this;
}

void Pingu::attack(Pingu& pingu) {
	pingu.take_damage(_damage);
}

void Pingu::take_damage(unsigned int damage) {
	unsigned int damage_taken = damage - (damage * _armor / 100);
	if (damage_taken > _hp)
		die();
	else
	_hp -= damage_taken;
}

void Pingu::heal(unsigned int heal) {
	_hp += heal;
}

void Pingu::regenerate() {
	heal(_regeneration / 100);
}

void Pingu::die() {
	std::cout << _name << " died" << std::endl;
}


unsigned int Pingu::get_id() const {
	return _id;
}

unsigned int Pingu::get_hp() const {
	return _hp;
}

unsigned int Pingu::get_damage() const {
	return _damage;
}

unsigned int Pingu::get_armor() const {
	return _armor;
}

const std::string Pingu::get_name() const {
	return _name;
}

const std::string Pingu::get_type() const {
	return _type;
}
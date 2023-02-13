//
// Created by Romain on 13/02/2023.
//

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>

#include "class-pingu/Pingu.hpp"
#include "class-pingu/Minion.hpp"

#define PINGU_GAME_VERSION "v0.0.1"
#define PINGU_GAME_NAME "Pingu game"
#define PINGU_GAME_AUTHOR "Created by Romain"
#define PINGU_GAME_YEAR "2023"
#define PINGU_GAME_DESCRIPTION "A game about pingu"

enum class Pingu_type {
	Pingu,
	Minion
};

enum class Pingu_action {
	Attack,
	Defend,
	Heal,
	Nothing
};

enum class Menu_choice {
	Exit,
	New_game,
	Load_game,
	Settings,
	Help
};






void menu_interface();
void credit();
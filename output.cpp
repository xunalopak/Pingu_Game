//
// Created by Romain on 13/02/2023.
//

#include "main.hpp"

void menu_interface() {
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Welcome to the Pingu game" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "1. Start a new game" << std::endl;
//	std::cout << "2. Load a game" << std::endl;
	std::cout << "2. Credits" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

void credit(){
	std::cout << "----------------------------------------" << std::endl;
	std::cout << PINGU_GAME_NAME << PINGU_GAME_VERSION << std::endl;
	std::cout << PINGU_GAME_AUTHOR << " in " << PINGU_GAME_YEAR << std::endl;
	std::cout << PINGU_GAME_DESCRIPTION << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}
#include "main.hpp"

void menu_choice(const std::string &cmd) {
	if (cmd == "NEW GAME" || cmd == "NEW")
		std::cout << "YOU START A NEW GAME" << std::endl;
	else if (cmd == "CREDITS")
		credit();
	else if (cmd == "MENU")
		menu_interface();
	else if (cmd == "EXIT")
		exit(0);
	else
		std::cout << "Unknown command" << std::endl;
}

void menu() {
	std::string cmd;
	bool MENU_EXIT = false;

	while (MENU_EXIT == false) {
		std::cout << "CMD: ";
		getline(std::cin, cmd);
		if (std::cin.eof() == true)
			exit(0);
		std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);
		menu_choice(cmd);
	}
}

void game() {
	menu_interface();
	menu();
}

int main() {
	game();

	return 0;
}

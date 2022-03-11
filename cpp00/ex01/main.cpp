#include "phonebook.hpp"

int check_cmd(std::string tmp)
{
	if (!tmp.compare("ADD") || !tmp.compare("SEARCH") || !tmp.compare("EXIT"))
		return (0);
	std::cout << "\"" << tmp << "\" is wrong command\n";
	return (1);
}

int main() {
	std::string tmp;
	phonebook pb;
	int i = 0;

	while (1)
	{
		do {
			std::cout << "Enter your command: [ADD, SEARCH, EXIT]\n";
			if (!(std::getline(std::cin, tmp)))
				exit (1);
		} while(check_cmd(tmp));
		if (tmp == "EXIT")
			break ;
		else if (tmp == "ADD") {
			if (i == 8 && (i -= 1))
				pb.movecontacts();
			pb.adding(i++);
		}
		else if (tmp == "SEARCH")
			pb.search();
	}
	return (0);
}
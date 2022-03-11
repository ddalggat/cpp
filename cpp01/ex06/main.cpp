

#include "Karen.hpp"

enum com {NOTHING, DEBUG, INFO, WARNING, ERROR};

int main(int ac, char **av)
{
	Karen karen;
	std::string str((ac != 2) ? "NOTHING" : av[1]);

	switch (str == "DEBUG" ? DEBUG :
			str == "INFO" ? INFO :
			str == "WARNING" ? WARNING :
			str == "ERROR" ? ERROR :
			NOTHING)
	{
		case NOTHING:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break;
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
	}
}
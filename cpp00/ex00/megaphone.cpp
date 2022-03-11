#include <iostream>

int main(int argc, char **argv) {
	std::string tmp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			tmp = argv[i];	
			for (size_t j = 0; j < tmp.length(); j++)
				std::cout << (char)toupper(tmp[j]);
		}
	}
	std::cout << std::endl;
	return (0);
}

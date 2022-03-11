#include <iostream>
#include <fstream>

void changeText(std::string *str, std::string& from, std::string& to) {
	size_t pos = 0;
	while((pos = str->find(from, pos)) != std::string::npos)
	{
		str->erase(pos, from.length());
		str->insert(pos, to);
		pos += to.length();
	}
}

std::string* newNameOfFile(char *str) {
	int i;
	std::string *tmp = new std::string;
	for (i = 0; str[i]; i++) {
		if (str[i] != '.')
			*tmp += str[i];
		else {
			*tmp += ".replace";
			break;
		}

	}
	return tmp;
}

int main(int argc, char **argv) {
	std::ifstream ifs;
	std::ofstream ofs;
	std::string *tmp, str, txt = "";
	std::string from = argv[2];
	std::string to = argv[3];

	if (argc != 4) {
		std::cout << "Replace failded. Try to use 3 arguments\n";
		return (1);
	}
	tmp = newNameOfFile(argv[1]);
	ifs.open(argv[1]);
	if (!ifs) {
		std::cout << "File opening failed. exiting..\n";
		return 1;
	}
	ofs.open(*tmp);
	if (!ofs) {
		std::cout << "File opening failed. exiting..\n";
		return 1;
	}
	while (!ifs.eof()) {
		str = "";
		getline(ifs, str);
		txt += str + '\n';
	}
	changeText(&txt, from, to);
	ofs << txt;
	ifs.close();
	ofs.close();
	delete tmp;

	return 0;
}

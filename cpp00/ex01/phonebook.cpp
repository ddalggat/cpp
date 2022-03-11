#include "phonebook.hpp"

phonebook::phonebook() {
    this->number = 0;
    std::cout << "Welcome to the phonebook!\n";
}

phonebook::~phonebook() {
    std::cout << "Goodbye!\n";
}

void phonebook::adding(int i) {
    if (this->number != 8)
        this->number++;
    this->contacts[i].adding();
}

void phonebook::movecontacts(void) {
    std::cout << "Phonebook is full! Last contacts was deleted\n";
    for (int i = 0; i < 7; i++)
        this->contacts[i] = this->contacts[i + 1];
}

int phonebook::checkindex(void) {
    std::string tmp;
    if (!(std::getline(std::cin, tmp)))
        exit (1);
    if (tmp.length() != 1) {
        std::cout << "There is no index like " << tmp << std::endl;
        return (1);
    }
    for (int i = 0; i < this->number; i++) {
        if (i == (tmp[0] - '0') - 1) {
            this->contacts[i].getinfo();
            return (0);
        }
    }
    std::cout << "There is no index like " << tmp << std::endl;
    return (1);
}

void phonebook::search(void) {
    std::string tmp;

    if (this->number == 0) {
        std::cout << "Your phonebook is empty\n";
        return ;
    }
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < this->number; i++) {
        this->contacts[i].printdemo(i);
        std::cout << "|-------------------------------------------|" << std::endl;
    }
    do {
        std::cout << "Enter index of contact: ";
    } while (this->checkindex());
}
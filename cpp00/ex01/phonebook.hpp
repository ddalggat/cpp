#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook {
	private:
		contact contacts[8];
		int number;
	public:
		phonebook();
		~phonebook();

		void adding(int i);
		void printing(int i);
		void movecontacts(void);
		void search(void);
		int checkindex();
};

#endif
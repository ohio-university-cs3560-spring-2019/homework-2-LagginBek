//The main function to test the replace function
//Takes an input files content replaces a target string
//This processed content is then outputed to a seperate file
//Logan Gordon

#include "replaced.h"
#include <string>
#include <iostream>

int main(int argc, char* argv[]){

	//variable declarations

	std::string target = argv[1];
	std::string replacement = argv[2];
	std::string line;

	//primary loop and primer

	std::getline(std::cin,line);

	while(! std::cin.eof()){

		replaced(line,target,replacement);

		std::cout << line <<std:: endl;

		std::getline(std::cin,line);

	}

	return 0;

}

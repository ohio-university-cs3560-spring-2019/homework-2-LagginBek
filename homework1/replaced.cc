//Declaration file for replace function; Logan Gordon 1/25/2019

#include<string>
#include"replaced.h"

void replaced(std::string &line,std::string target, std::string replacement){


	std::size_t targ_length = target.size();
	std::size_t targ_position = line.find(target);

	while(targ_position != std::string::npos){

		line.erase(targ_position,targ_length);
		line.insert(targ_position,replacement);

		targ_position = line.find(target);
	}

}

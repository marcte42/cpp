#include <iostream>
#include <fstream>

std::string	sed(std::string const & source, std::string const & s1, std::string const & s2)
{
	std::string					buffer;
	std::string::const_iterator it;
	std::string::const_iterator ptr;

	it = source.begin();
	while ( (ptr = std::search(it, source.end(), s1.begin(), s1.end())) != source.end() ) {
		buffer.append(it, ptr);
		buffer.append(s2);
		it = ptr + s1.size();
	}
	return (buffer);
}

int main(int ac, char **av) {

	std::ifstream ifs;
	std::ofstream ofs;
	std::string infile;
	std::string s1;
	std::string s2;
	std::string buffer;
	std::string line;

	if ( ac != 4 ) {
		std::cout << "usage: x x x" << std::endl;
		return (1);
	}
	infile = av[1];
	s1 = av[2];
	s2 = av[3];
	if ( infile.empty() || s1.empty() )
		return (1);
	ifs.open(infile);
	if ( !ifs.is_open() ) {
		std::cout << "Bad file descriptor" << std::endl;
		return (1);
	}
	while ( getline(ifs, line) ) {
			buffer += line;
		if (!ifs.eof())
			buffer += "\n";
	}
	ifs.close();

	buffer = sed(buffer, s1, s2);
	std::cout << buffer << std::endl;

	ofs.open(infile + ".replace");
	if ( !ofs.is_open() ) {
		std::cout << "Bad file descriptor" << std::endl;
		return (1);
	}
	ofs << buffer;
	ifs.close();
	return (0);
}
